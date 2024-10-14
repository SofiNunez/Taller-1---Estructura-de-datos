#include <iostream>
#pragma once 
#include "MaterialBibliografico.h"

class Revista : public MaterialBibliografico {
    private:
        int numeroEdicion;
        string mesPublicacion;
    public:
        Revista(string nombre, string isbn, string autor, bool prestado, int numeroEdicion, string mesPublicacion);
        void mostrarInformacion();
        int getNumeroEdicion();
        void setNumeroEdicion(int numeroEdicion);
        string getMesPublicacion();
        void setMesPublicacion(string mesPublicacion);
        ~Revista();
};