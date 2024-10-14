#include <iostream>
#include "Revista.h"

using namespace std;

Revista::Revista(string nombre, string isbn, string autor, bool prestado, int numeroEdicion, string mesPublicacion) : MaterialBibliografico(nombre, isbn, autor, prestado), numeroEdicion(numeroEdicion), mesPublicacion(mesPublicacion){
    this -> nombre = nombre;
    this -> isbn = isbn;
    this -> autor = autor;
    this -> prestado = false;
    this -> numeroEdicion = numeroEdicion;
    this -> mesPublicacion = mesPublicacion;
}

void Revista:: mostrarInformacion() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Isbn: "<<isbn<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Prestado?: "<<prestado<<endl;
    cout<<"Numero de Edición: "<<numeroEdicion<<endl;
    cout<<"Mes de Publicación: "<<mesPublicacion<<endl;
}

int Revista:: getNumeroEdicion() {
    return this -> numeroEdicion;
}

void Revista:: setNumeroEdicion(int numeroEdicion) {
    this -> numeroEdicion = numeroEdicion;
}

string Revista:: getMesPublicacion() {
    return this -> mesPublicacion;
}

void Revista:: setMesPublicacion(string mesPublicacion) {
    this -> mesPublicacion = mesPublicacion;
}

Revista :: ~Revista(){
    cout<<"se destruye esta revista"<< mostrarInformacion << endl;
}
