#ifndef __PROFESIONAL_CPP__
#define __PROFESIONAL_CPP__
#include "profesional.hpp"

Profesional::Profesional(const string &name, const string &mail, const string &phone)
{
    this->name = name;
    this->mail = mail;
    this->phone = phone;
}
string Profesional::getName()
{
    return this->name;
}
string Profesional::getMail()
{
    return this->name;
}
string Profesional::getPhone()
{
    return this->name;
}

#endif
