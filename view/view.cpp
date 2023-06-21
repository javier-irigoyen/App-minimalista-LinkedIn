#ifndef __VIEW_CPP__
#define __VIEW_CPP__
#include "view.hpp"

// MENSAJE BIENVENIDA
void View::mostrarMensajeBienvenida()
{
    cout << "Bienvenid@ a la aplicación minimalista de LinkedIn" << endl;
}

// OPCIONES INICIALES
void View::mostrarMenuOpcionesInicial()
{
    cout << "Seleccione una opción:" << endl;
    cout << "1. Registrarse" << endl;
    cout << "2. Iniciar sesión" << endl;
    cout << "3. Salir" << endl;
}
// CAPTURAR OPCION
int View::obtenerOpcion()
{
    int opcion;
    cout << "Opción: ";
    cin >> opcion;
    cin.ignore();
    return opcion;
}

// MENU TIPO DE USUARIO
void View::mostrarMenuTipoUsuario()
{
    cout << "¿Es usted un profesional o una empresa?" << endl;
    cout << "1. Profesional" << endl;
    cout << "2. Empresa" << endl;
}

// CAPTURAR DATOS
string View::obtenerNombre()
{
    string nombre;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    return nombre;
}

string View::obtenerTelefono()
{
    string telefono;
    cout << "Ingrese su teléfono: ";
    getline(cin, telefono);
    return telefono;
}

string View::obtenerCorreo()
{
    string correo;
    cout << "Ingrese su correo electrónico: ";
    getline(cin, correo);
    return correo;
}

// static string obtenerPuesto()
// {
//     string correo;
//     cout << "Ingrese su correo electrónico: ";
//     getline(cin, correo);
//     return correo;
// }

// MENU PROFESIONAL
void View::mostrarMenuProfesional()
{
    cout << "Hola !" << endl;
    cout << "1. Profesional" << endl;
    cout << "2. Empresa" << endl;
};

// MENSAJE DE ERROR
void View::mostrarMensajeError()
{
    cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
    cout << "(presione una tecla para continuar ...)" << endl;
    getchar();
}
void View::salir()
{
    cout << "Gracias por utilizar la aplicación. ¡Hasta luego!" << endl;
}

void View::clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

// Implementa los demás métodos de la vista
#endif
