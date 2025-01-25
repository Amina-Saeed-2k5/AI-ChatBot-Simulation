#include "Bot.h"

// Default constructor
Bot::Bot() {}

// Parameterized constructor
Bot::Bot(string name, string defaultResp) {
    botName = name;
    defaultResponse = defaultResp;
}

// Retrieve a response for a query
string Bot::getResponse(string query) {
    ifstream fileRead("responses.txt"); // Open file for reading
    if (!fileRead) {
        cout << "No responses file found. Starting fresh.\n";
        return defaultResponse;
    }

    string storedQuery, storedResponse;
    while (getline(fileRead, storedQuery) && getline(fileRead, storedResponse)) {
        if (storedQuery == query) {
            fileRead.close();
            return storedResponse; // Return matching response
        }
    }

    fileRead.close(); // Close the file
    return defaultResponse; // If no match is found
}

// Learn a new query-response pair
void Bot::learnResponse(string query, string response) {
    ofstream fileWrite("responses.txt", ios::app); // Open file in append mode
    if (!fileWrite) {
        cout << "Error opening responses file for writing.\n";
        return;
    }
    fileWrite << query << "\n" << response << "\n"; // Write query-response pair
    fileWrite.close(); // Close the file
}

// Return the default response
string Bot::getDefaultResponse() const {
    return defaultResponse;
}