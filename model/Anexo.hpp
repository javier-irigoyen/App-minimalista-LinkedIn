#ifndef __ANEXO_HPP__
#define __ANEXO_HPP__

#include <vector>
#include <string>
using namespace std;
class Anexo
{
private:
    unsigned long id;
    vector<string> documentos;
    vector<string> imagenes;

public:
    Anexo();
    Anexo(unsigned long id, vector<string> documentos, vector<string> imagenes);
    unsigned long getId();
    void setId(unsigned long id);
    vector<string> getDocumentos();
    void setDocumentos(vector<string> documentos);
    vector<string> getImagenes();
    void setImagenes(vector<string> imagenes);
};

#endif
