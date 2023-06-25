#ifndef __CONTROLLER_HPP__
#define __CONTROLLER_HPP__
#include <iostream>
#include <string>
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"
#include "../collections/GraphProfesional.hpp"

using namespace std;

class Controller
{
public:
    GraphProfesional graphProfesionales;

public:

    void loadCollections();
    static void menuPrincipal();
    static void registrarUsuario();
};

#endif
