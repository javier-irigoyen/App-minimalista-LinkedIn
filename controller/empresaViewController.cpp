#ifndef __EMPRESA_VIEW_CONTROLLER_CPP__
#define __EMPRESA_VIEW_CONTROLLER_CPP__
#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "empresaController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

// EMPRESA
void EmpresaViewController::registrarEmpresa()
{
    string nombre = View::obtenerNombre();
    string telefono = View::obtenerTelefono();
    string correo = View::obtenerCorreo();

    // Realizar el registro de la empresa
    // ...

    cout << "¡Registro exitoso como empresa!" << endl;
    EmpresaViewController::menuEmpresa(nombre);
}
// MENU EMPRESA LOGEADO
void EmpresaViewController::menuEmpresa(string name)
{
    View::mostrarMenuEmpresa(name);
    int opcion = View::obtenerOpcion();

    switch (opcion)
    {
    case 1:
    {
        EmpresaViewController::gestionarPuestosDeTrabajo();
    }
    case 2:
    {

        EmpresaViewController::gestionarEventos();
    }
    case 3:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        EmpresaViewController::menuEmpresa(name);
    }
    }
}
// GESTIONAR PUESTOS DE TRABAJOS
void EmpresaViewController::gestionarPuestosDeTrabajo()
{
    View::mostrarGestionPerfilProfesionalHabilidad();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        EmpresaController::registrarPuestosDeTrabajo();
    }
    case 2:
    {

        EmpresaController::editarPuestosDeTrabajo();
    }
    case 3:
    {

        EmpresaController::eliminarPuestosDeTrabajo();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        EmpresaViewController::gestionarPuestosDeTrabajo();
    }
    }
}
// GESTIONAR EVENTOS
void EmpresaViewController::gestionarEventos()
{
    View::mostrarGestionPerfilProfesionalHabilidad();
    int opcion = View::obtenerOpcion();
    switch (opcion)
    {
    case 1:
    {

        EmpresaController::registrarEvento();
    }
    case 2:
    {

        EmpresaController::editarEvento();
    }
    case 3:
    {

        EmpresaController::eliminarEvento();
    }
    case 4:
    {
        View::salir();
        break;
    }
    default:
    {
        View::mostrarError();
        EmpresaViewController::gestionarEventos();
    }
    }
}
#endif
