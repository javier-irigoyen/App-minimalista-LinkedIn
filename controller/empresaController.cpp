#include <iostream>

#include "controller.hpp"
#include "empresaViewController.hpp"
#include "empresaController.hpp"
#include "../view/view.hpp"
#include "../model/profesional.hpp"
#include "../model/empresa.hpp"

void EmpresaController::registrarEmpresa()
{
    cout << "Registro Empresa" << endl;
    string nombre = View::obtenerNombre();
    ul telefono = View::obtenerTelefono();
    string correo = View::obtenerCorreo();

    // Realizar el registro de la empresa
    // ...

    cout << "¡Registro exitoso como empresa!" << endl;
    EmpresaViewController::menuEmpresa(nombre);
}
void EmpresaController::registrarPuestosDeTrabajo() {}
void EmpresaController::editarPuestosDeTrabajo() {}
void EmpresaController::eliminarPuestosDeTrabajo() {}

void EmpresaController::registrarEvento() {}
void EmpresaController::editarEvento() {}
void EmpresaController::eliminarEvento() {}
