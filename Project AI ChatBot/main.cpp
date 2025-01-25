#include <iostream>
#include <string>
#include "Bot.cpp"
#include "GeneralBot.cpp"
#include "SubjectBot.cpp"
using namespace std;

int main() {
    GeneralBot generalBot("Genie", "I don't know that. Can you teach me?"); //Genie is bot Name 
    SubjectBot subjectBot("Techie", "I don't know that. Can you teach me?");
    Bot* bPtr; // Pointer of base class for polymorphism

    int choice;
    string query;

    while (true) {
        cout << "\nWelcome to AI Chatbot! Select an option:\n";
        cout << "1. General Question\n";
        cout << "2. Subject-Specific Question\n";
        cout << "3. Exit\n";
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 3) {
            cout << "Goodbye!" << endl;
            break;
        }

        cout << "Ask your question: ";
        getline(cin, query);

        if (choice == 1) {
            bPtr = &generalBot; // Use GeneralBot
        } else if (choice == 2) {
            bPtr = &subjectBot; // Use SubjectBot
        } else {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        string response = bPtr->getResponse(query);
        cout << "Bot: " << response << endl;

        if (response == bPtr->getDefaultResponse()) {
            cout << "Can you teach me the answer to your question? ";
            string userResponse;
            getline(cin, userResponse);
            bPtr->learnResponse(query, userResponse);
            cout << "Thank you! I've learned something new.\n";
        }
    }

    return 0;
}