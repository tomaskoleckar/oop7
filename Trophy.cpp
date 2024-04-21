#include "Trophy.h"


Trophy::Trophy(std::string name, int value)
{
    this->name = name;
    this->value = value;
}

int Trophy::getValue()
{
    return this->value;
}

std::string Trophy::getName()
{
    return this->name;
}


Trophy::~Trophy()
{

}