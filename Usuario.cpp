#include "Usuario.h"
#include <iostream>

    Usuario::Usuario(string nombre, string id){
        this->nombre = nombre;
        this->id = id;


        for (int i = 0; i < 5; i++) {
            materialesPrestados[i] = nullptr;
        }
}
bool Usuario::prestarMaterial(MaterialBibliografico* material) {
    if (numPrestados >= 5 || material->getPrestado() == false) return false;
    materialesPrestados[numPrestados++] = material;
    material->setPrestado(true);
    return true;
}

bool Usuario::devolverMaterial(string nombreMaterial) {
    for (int i = 0; i < numPrestados; i++) {
        if (materialesPrestados[i] && materialesPrestados[i]->getPrestado() == true) {
            materialesPrestados[i]->setPrestado(false);
            materialesPrestados[i] = nullptr;
            --numPrestados;
            return true;
        }
    }
    return false;
}

void Usuario::mostrarMaterialesPrestados(){
    for (int i = 0; i < numPrestados; i++) {
        if (materialesPrestados[i]) {
            materialesPrestados[i]->mostrarInformacion();
        }
    }
}
string Usuario::getId(){
    return this-> id;
}

