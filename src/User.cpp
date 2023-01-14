#include "User.h"

#include <sstream>
#include "Utils.h"

User::User(string name, time_t dateOfBirth, string address)
{
    this->name = name;
    this->dateOfBirth = dateOfBirth;
    this->address = address;
}

string User::getName()
{
    return this->name;
}

string User::getAddress()
{
    return this->address;
}

time_t User::getDateOfBirth()
{
    return this->dateOfBirth;
}

string User::toString()
{
    ostringstream oStringStream;
    oStringStream << "User [ name: " << this->name << ", dateOfBirth: " << DateToString(this->dateOfBirth) << ", address: " << this->address << " ]";
    return oStringStream.str();
}