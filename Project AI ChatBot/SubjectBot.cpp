#include "SubjectBot.h"

// Default constructor
SubjectBot::SubjectBot() : Bot("SubjectBot", "I don't know that. Can you teach me?") {}

// Parameterized constructor
SubjectBot::SubjectBot(string name, string defaultResp) : Bot(name, defaultResp) {}

// Override getResponse
string SubjectBot::getResponse(string query) {
    if (query == "what is C++?") return "C++ is a powerful programming language.";
    if (query == "what is polymorphism?") return "Polymorphism allows one interface, many implementations.";
    return Bot::getResponse(query); // Reuse parent class logic
}