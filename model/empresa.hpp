#ifndef __EMPRESA_HPP__
#define __EMPRESA_HPP__
#include <string>
#include "model.hpp"
using namespace std;
class Empresa : public Model
{
private:
    string nombre;
    string correo;
    string telefono;

public:
    Empresa(const string &nombre, const string &correo, const string &telefono);
    string getFileName() const override;
    string getAttributes() const override;
};
#endif
