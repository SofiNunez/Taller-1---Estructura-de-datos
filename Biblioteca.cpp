#include "Biblioteca.h"
#include "iostream"

Biblioteca::Biblioteca() : totalMateriales(0), totalUsuarios(0){
    for(int i=0;i<100;i++){
        biblioteca[i] = nullptr;
    }
    for(int i=0;i<50;i++){
        usuarios[i] = nullptr;
    }
}

bool Biblioteca::agregarMaterial(MaterialBibliografico* material){
    if(totalMateriales >= 100) return false;
    biblioteca[totalMateriales++] = material;
    return true;
}
void Biblioteca::printMateriales(){
    for(int i=0;i<totalMateriales; i++){
        biblioteca[i]->mostrarInformacion();
        std::cout << std::endl;
    }
}
MaterialBibliografico* Biblioteca::buscarMaterial( string titulo){
    for (int i = 0; i < totalMateriales; i++) {
        if (biblioteca[i]->getPrestado() == false) {
            return biblioteca[i];
        }
    }
    return nullptr;
}
bool Biblioteca::agregarUsuario(Usuario* usuario) {
    if (totalUsuarios >= 50) return false;
    usuarios[totalUsuarios++] = usuario;
    return true;
}  
Usuario* Biblioteca::encontrarUsuario(string id){
    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i]->id() == id) {
            return usuarios[i];
        }
    }
    return nullptr;
}
bool Biblioteca::eliminarUsuario(string id) {
    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i] && usuarios[i]->getId() == id) {
            delete usuarios[i];
            usuarios[i] = nullptr;
            --totalUsuarios;
            return true;
        }
    }
    return false;
}
void Biblioteca::mostrarUsusarios() {
    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i]) {
            usuarios[i]->mostrarInformacion();
        }
    }
}

Biblioteca::~Biblioteca() {
    for (int i = 0; i < totalMateriales; i++) {
        delete biblioteca[i];
    }
    for (int i = 0; i < totalUsuarios; i++) {
        delete usuarios[i];
    }
}


