
#include "MaterialBibliografico.h"
#include "Usuario.h"
#include <iostream>
#include <vector>

class Biblioteca {
    private:
        MaterialBibliografico* biblioteca[100];
        Usuario* usuarios[50];
        int totalMateriales;
        int totalUsuarios;

    public:
        Biblioteca();
        bool agregarMaterial(MaterialBibliografico* material);
        void printMateriales();
        MaterialBibliografico* buscarMaterial(string titulo);

        bool agregarUsuario(Usuario* usuario);
        Usuario* encontrarUsuario(string id);
        bool eliminarUsuario(string id);
        void mostrarUsusarios();

        ~Biblioteca();

};