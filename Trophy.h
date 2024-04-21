#ifndef TROPHY_H
#define TROPHY_H
#include "iostream"
#pragma once

class Trophy
{
public:
    Trophy(std::string name, int value);
    std::string getName();
    int getValue();
    ~Trophy();

private:
    std::string name;
    int value;
};

#endif