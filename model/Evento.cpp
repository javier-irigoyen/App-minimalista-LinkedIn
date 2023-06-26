#include "Evento.hpp"

Evento::Evento(string tipo, string titulo, string descripcion, string fecha, string hora, string lugar) : tipo(tipo), titulo(titulo), descripcion(descripcion), fecha(fecha), hora(hora), lugar(lugar) {}

string Evento::getTipo()
{
    return tipo;
}

void Evento::setTipo(string tipo)
{
    this->tipo = tipo;
}

string Evento::getTitulo()
{
    return titulo;
}

void Evento::setTitulo(string titulo)
{
    this->titulo = titulo;
}

string Evento::getDescripcion()
{
    return descripcion;
}

void Evento::setDescripcion(string descripcion)
{
    this->descripcion = descripcion;
}

string Evento::getFecha()
{
    return fecha;
}

void Evento::setFecha(string fecha)
{
    this->fecha = fecha;
}

string Evento::getHora()
{
    return hora;
}

void Evento::setHora(string hora)
{
    this->hora = hora;
}

string Evento::getLugar()
{
    return lugar;
}

void Evento::setLugar(string lugar)
{
    this->lugar = lugar;
}
