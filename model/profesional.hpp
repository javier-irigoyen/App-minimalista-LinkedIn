#ifndef __PROFESIONAL_HPP__
#define __PROFESIONAL_HPP__
#include <string>
#include "model.hpp"
using namespace std;

class Profesional : public Model{
private:
    string name;
    string mail;
    string phone;

public:
    Profesional(const string& name, const string& mail, const string& phone);
    string getName();
    string getMail();
    string getPhone();
};
#endif
