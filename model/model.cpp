
#include "model.hpp"

void Model::save() const
{
    try
    {
        ofstream archivo(getFileName(), ios::app);
        if (!archivo)
        {
            throw runtime_error("No se pudo abrir el archivo " + getFileName());
        }

        archivo << getAttributes() << endl;

        archivo.close();
    }
    catch (const exception &e)
    {
        cout << "Error al guardar en el archivo: " << e.what() << endl;
    }
}
