#ifndef BOT_H
#define BOT_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Bot {
protected:
    string botName;
    string defaultResponse;

public:
    Bot(string name, string defaultResp);  // Constructor
    Bot(); // Default constructor
    virtual string getResponse(string query); // Virtual function for polymorphism
    string getDefaultResponse() const; // Return the default response
    void learnResponse(string query, string response); // Teach the bot a new response
    void saveResponse(string query, string response); // Save a new response to file
};
#endif