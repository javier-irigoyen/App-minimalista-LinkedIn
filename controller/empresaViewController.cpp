#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "empresaController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

// EMPRESA

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
        break;
    }
    case 2:
    {

        EmpresaViewController::gestionarEventos();
        break;
    }
    case 3:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        EmpresaViewController::menuEmpresa(name);
        break;
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
        break;
    }
    case 2:
    {

        EmpresaController::editarPuestosDeTrabajo();
        break;
    }
    case 3:
    {

        EmpresaController::eliminarPuestosDeTrabajo();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        EmpresaViewController::gestionarPuestosDeTrabajo();
        break;
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
        break;
    }
    case 2:
    {

        EmpresaController::editarEvento();
        break;
    }
    case 3:
    {

        EmpresaController::eliminarEvento();
        break;
    }
    case 4:
    {
        View::salir();
        Controller::menuPrincipal();
        break;
    }
    default:
    {
        View::mostrarError();
        EmpresaViewController::gestionarEventos();
        break;
    }
    }
}
