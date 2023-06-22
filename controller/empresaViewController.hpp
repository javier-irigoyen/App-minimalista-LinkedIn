#ifndef __EMPRESA_VIEW_CONTROLLER_HPP__
#define __EMPRESA_VIEW_CONTROLLER_HPP__
#include <iostream>
#include <string>
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"
#include "controller.hpp"

using namespace std;

class EmpresaViewController: public Controller
{
public:

    static void registrarEmpresa();

    static void menuEmpresa(string name);
    static void gestionarPuestosDeTrabajo();
    static void gestionarEventos();
};

#endif
