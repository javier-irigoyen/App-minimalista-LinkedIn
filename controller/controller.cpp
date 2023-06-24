#ifndef __CONTROLLER_CPP__
#define __CONTROLLER_CPP__
#include <iostream>

#include "controller.hpp"
// #include "empresaViewController.hpp"
#include "profesionalViewController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

void Controller::loadCollections()
{
    graphProfesionales.load();
    graphProfesionales.print();
    // tp.print();
    cin.get();
}
// MENU INICIAL
void Controller::menuPrincipal()
{
    // View::clearScreen();
    View::mostrarBienvenida();
    View::mostrarMenuOpcionesInicial();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {
        View::clearScreen();
        Controller::registrarUsuario();
        break;
    }
    case 2:
    {
        View::clearScreen();
        // View::iniciarSesion();
        break;
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        Controller::menuPrincipal();
    }
    }
}

// MENU REGISTRO NUEVO USUARIO
void Controller::registrarUsuario()
{
    View::mostrarMenuTipoUsuario();
    int opcion = View::obtenerOpcion();

    switch (opcion)
    {
    case 1:
    {
        ProfesionalViewController::registrarProfesional();
    }
    case 2:
    {

        EmpresaViewController::registrarEmpresa();
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        Controller::registrarUsuario();
    }
    }
}

#endif
