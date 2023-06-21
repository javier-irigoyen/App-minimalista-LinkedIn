#ifndef __CONTROLLER_HPP__
#define __CONTROLLER_HPP__
#include <iostream>
#include <string>
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

using namespace std;

class Controller
{
public:
    static void menuInicialController();
    static void registrarUsuario();
    static void registrarProfesional();
    static void registrarEmpresa();
    // static void iniciarSesion();
    // Otros métodos del controlador
};

#endif
