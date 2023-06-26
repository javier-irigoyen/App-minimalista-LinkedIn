#ifndef __INSTITUCIONEDUCATIVA_HPP__
#define __INSTITUCIONEDUCATIVA_HPP__

#include <string>
using namespace std;
class InstitucionEducativa
{
private:
    string nombre;
    string direccion;
    string pais;
    int ranking;
    // estructura de carreras
    // estrutura de egresados

public:
    InstitucionEducativa(string nombre = "", string direccion = "", string pais = "", int ranking = 0);

    string getNombre();

    void setNombre(string nombre);

    string getDireccion();

    void setDireccion(string direccion);

    string getPais();

    void setPais(string pais);

    int getRanking();

    void setRanking(int ranking);
    // métodos de carreras
    // métodos de egresados
};

#endif
