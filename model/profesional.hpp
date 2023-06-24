#ifndef __PROFESIONAL_HPP__
#define __PROFESIONAL_HPP__
#include <string>
#include "model.hpp"
using namespace std;

class Profesional : public Model
{
private:
    unsigned long id;
    string name;
    string mail;
    unsigned long phone;
    unsigned long dni;

public:
    Profesional(const unsigned long &id = 0, const string &name = "", const string &mail = "", const unsigned long &phone = 0, const unsigned long &dni = 0);
    unsigned long getId() const;
    string getName() const;
    string getMail() const;
    unsigned long getPhone() const;
    unsigned long getDni() const;
    bool operator==(const Profesional &otro) const;
    friend ostream &operator<<(ostream &os, const Profesional &profesional);
};
#endif
