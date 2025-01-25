#include "GeneralBot.h"

// Default constructor
GeneralBot::GeneralBot() : Bot("GeneralBot", "I don't know that. Can you teach me?") {}

// Parameterized constructor
GeneralBot::GeneralBot(string name, string defaultResp) : Bot(name, defaultResp) {}

// Override getResponse
string GeneralBot::getResponse(string query) {
    return Bot::getResponse(query); // Reuse parent class logic
}