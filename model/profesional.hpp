#ifndef __PROFESIONAL_HPP__
#define __PROFESIONAL_HPP__
#include <string>
#include "model.hpp"
using namespace std;

class Profesional : public Model
{
private:
    ul id;
    string name;
    string mail;
    ul phone;
    ul dni;

public:
    Profesional(const ul &id = 0, const string &name = "", const string &mail = "", const ul &phone = 0, const ul &dni = 0);
    ul getId() const;
    string getName() const;
    string getMail() const;
    ul getPhone() const;
    ul getDni() const;
    bool operator==(const Profesional &otro) const;
    friend ostream &operator<<(ostream &os, const Profesional &profesional);
    string getFileName() const override;
    string getAttributes() const override;
};
#endif
