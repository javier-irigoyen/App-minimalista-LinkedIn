#ifndef __MODEL_HPP__
#define __MODEL_HPP__
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

using namespace std;
typedef unsigned long ul;
class Model
{
public:
    virtual string getFileName() const = 0;
    virtual string getAttributes() const = 0;
    // Model(const string& nombre, const string& correo, const string& telefono);
    void save() const;
};
#endif
