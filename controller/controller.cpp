#include <iostream>

#include "controller.hpp"
// #include "empresaViewController.hpp"
#include "profesionalViewController.hpp"
#include "profesionalController.hpp"
#include "empresaController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

void Controller::loadCollections()
{
    graphProfesionales.load();
    graphProfesionales.save();
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
        break;
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
        ProfesionalController::registrarProfesional();
        break;
    }
    case 2:
    {

        EmpresaController::registrarEmpresa();
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
        Controller::registrarUsuario();
        break;
    }
    }
}
