#ifndef SUBJECTBOT_H
#define SUBJECTBOT_H

#include "Bot.h"

class SubjectBot : public Bot {
public:
    SubjectBot(string name, string defaultResp);
    SubjectBot(); // Default constructor
    string getResponse(string query) override; // Override getResponse
};

#endif