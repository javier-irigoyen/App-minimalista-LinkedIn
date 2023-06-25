#include "profesional.hpp"
#include <iostream>
#include <fstream>
Profesional::Profesional(const ul &id, const string &name, const string &mail, const ul &phone, const ul &dni)
{
    this->id = id;
    this->name = name;
    this->mail = mail;
    this->phone = phone;
    this->dni = dni;
}
ul Profesional::getId() const
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

ul Profesional::getPhone() const
{
    return this->phone;
}
ul Profesional::getDni() const
{
    return this->dni;
}

bool Profesional::operator==(const Profesional &otro) const
{
    return id == otro.getId();
}
ostream &operator<<(ostream &os, const Profesional &profesional)
{
    os << profesional.getId() << "," << profesional.getName() << "," << profesional.getMail() << "," << profesional.getPhone() << " |";
    return os;
}
string Profesional::getFileName() const
{
    return "Profesionales.txt";
}
string Profesional::getAttributes() const
{
    return to_string(id) + "," + name + "," + mail + "," + to_string(phone) + "," + to_string(dni);
}
