#include "profesional.hpp"
#include <iostream>
#include <fstream>
Profesional::Profesional(const unsigned long &id, const string &name, const string &mail, const unsigned long &phone, const unsigned long &dni)
{
    this->id = id;
    this->name = name;
    this->mail = mail;
    this->phone = phone;
    this->dni = dni;
}
unsigned long Profesional::getId() const
{
    return this->id;
}
string Profesional::getName() const
{
    return this->name;
}
string Profesional::getMail() const
{
    return this->mail;
}

unsigned long Profesional::getPhone() const
{
    return this->phone;
}
unsigned long Profesional::getDni() const
{
    return this->dni;
}
bool Profesional::operator==(const Profesional &otro) const
{
    return id == otro.getId();
}
ostream &operator<<(ostream &os, const Profesional &profesional)
{
    os << profesional.getName();
    return os;
}
