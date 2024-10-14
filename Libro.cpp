#include <iostream>
#include "Libro.h"

using namespace std;

Libro::Libro(string nombre, string isbn, string autor, bool prestado, string fechaPublicacion, string resumen) : MaterialBibliografico(nombre, isbn, autor, prestado), fechaPublicacion(fechaPublicacion), resumen(resumen){
    this -> nombre = nombre;
    this -> isbn = isbn;
    this -> autor = autor;
    this -> prestado = false;
    this -> fechaPublicacion = fechaPublicacion;
    this -> resumen = resumen;
}

void Libro:: mostrarInformacion() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Isbn: "<<isbn<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Prestado?: "<<prestado<<endl;
    cout<<"Fecha Publicación: "<<fechaPublicacion<<endl;
    cout<<"Resumen: "<<resumen<<endl;
}

string Libro:: getFechaPub() {
    return this -> fechaPublicacion;
}

void Libro:: setFechaPub(string fechaPublicacion) {
    this -> fechaPublicacion = fechaPublicacion;
}

string Libro:: getResumen() {
    return this -> resumen;
}

void Libro:: setResumen(string resumen) {
    this -> resumen = resumen;
}

Libro :: ~Libro(){
    cout<<"se destruye este libro"<<endl;
}


