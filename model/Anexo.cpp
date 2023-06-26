#include "Anexo.hpp"

Anexo::Anexo() {}

Anexo::Anexo(unsigned long id, vector<string> documentos, vector<string> imagenes)
    : id(id), documentos(documentos), imagenes(imagenes) {}

unsigned long Anexo::getId()
{
    return id;
}

void Anexo::setId(unsigned long id)
{
    this->id = id;
}

vector<string> Anexo::getDocumentos()
{
    return documentos;
}

void Anexo::setDocumentos(vector<string> documentos)
{
    this->documentos = documentos;
}

vector<string> Anexo::getImagenes()
{
    return imagenes;
}

void Anexo::setImagenes(vector<string> imagenes)
{
    this->imagenes = imagenes;
}
