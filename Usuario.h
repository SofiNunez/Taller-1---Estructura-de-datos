#include <iostream>
#pragma once
#include "MaterialBibliografico.h"

class Usuario {
    private:
        string nombre;
        int id;
        MaterialBibliografico* materialesPrestados[5];
    public:
        Usuario(string nombre, int id, MaterialBibliografico* materialesPrestados[5]);
        ~Usuario();
        void prestarMaterial();
        void devolverMaterial();
        void mostrarMaterialesPrestados();
};

