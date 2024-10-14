#include <iostream>
#pragma once
#include "MaterialBibliografico.h"

class Usuario {
    private:
        string nombre;
        string id;
        MaterialBibliografico* materialesPrestados[5];
        int numPrestados;
    public:
        Usuario(string nombre, string id);
        ~Usuario();
        bool prestarMaterial(MaterialBibliografico* material);
        bool devolverMaterial(string nombreMaterial);
        void mostrarMaterialesPrestados();
        void mostrarInformacion();
        string getId();

};
