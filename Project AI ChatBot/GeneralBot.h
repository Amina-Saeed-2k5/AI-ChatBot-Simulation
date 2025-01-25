#ifndef GENERALBOT_H
#define GENERALBOT_H

#include "Bot.h"

class GeneralBot : public Bot {
public:
    GeneralBot(string name, string defaultResp);
    GeneralBot(); // Default constructor
    string getResponse(string query) override; // Override getResponse
};

#endif