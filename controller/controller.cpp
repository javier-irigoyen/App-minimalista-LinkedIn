#ifndef __CONTROLLER_CPP__
#define __CONTROLLER_CPP__
#include <iostream>

#include "controller.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

//MENU INICIAL
void Controller::menuInicialController()
{
    // View::clearScreen();
    View::mostrarMensajeBienvenida();
    View::mostrarMenuOpcionesInicial();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {
        View::clearScreen();
        registrarUsuario();
        break;
    }
    case 2:
    {
        // iniciarSesion();
        break;
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarMensajeError();
        Controller::menuInicialController();
    }
    }
}

//MENU REGISTRO NUEVO USUARIO
void Controller::registrarUsuario()
{
    View::mostrarMenuTipoUsuario();
    int opcion = View::obtenerOpcion();

    switch (opcion)
    {
    case 1:
    {
        registrarProfesional();
    }
    case 2:
    {

        registrarEmpresa();
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarMensajeError();
        Controller::registrarUsuario();
    }
    }
}
//PROFESIONAL
void Controller::registrarProfesional()
{
    string nombre = View::obtenerNombre();
    string telefono = View::obtenerTelefono();
    string correo = View::obtenerCorreo();

    // Realizar el registro del profesional
    // ...

    cout << "¡Registro exitoso como profesional!" << endl;
}

//EMPRESA
void Controller::registrarEmpresa()
{
    string nombre = View::obtenerNombre();
    string telefono = View::obtenerTelefono();
    string correo = View::obtenerCorreo();

    // Realizar el registro de la empresa
    // ...

    cout << "¡Registro exitoso como empresa!" << endl;
}

//MENU PROFESIONAL LOGEADO
void Controller::menuProfesional()
{
    View::mostrarMenuProfesional();
    int opcion = View::obtenerOpcion();

    switch (opcion)
    {
    case 1:
    {
        registrarProfesional();
    }
    case 2:
    {

        registrarEmpresa();
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarMensajeError();
        Controller::registrarUsuario();
    }
    }
}
// Implementa los demás métodos del controlador
#endif
