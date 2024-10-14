#include <iostream>
#pragma once 
#include "MaterialBibliografico.h"

using namespace std;

class Libro : public MaterialBibliografico {
    private:
        string fechaPublicacion, resumen;
    public:
        Libro(string nombre, string isbn, string autor, bool prestado, string fechaPublicacion, string resumen);
        void mostrarInformacion();
        string getFechaPub();
        void setFechaPub(string fechaPublicacion);
        string getResumen();
        void setResumen(string resumen);
        ~Libro();
    
};