#include <iostream>
#include "MaterialBibliografico.h"

using namespace std;

MaterialBibliografico::MaterialBibliografico(string nombre, string isbn, string autor, bool prestado) {
    this -> nombre = nombre;
    this -> isbn = isbn;
    this -> autor = autor;
    this -> prestado = false;
    
}

void MaterialBibliografico::mostrarInformacion() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Isbn: "<<isbn<<endl;
    cout<<"Autor: "<<autor<<endl;
    cout<<"Prestado?: "<<prestado<<endl;
}

string MaterialBibliografico::getNombre(){
    return this -> nombre;
}

void MaterialBibliografico::setNombre(string nombre){
    this -> nombre = nombre;
}

string MaterialBibliografico::getIsbn(){
    return this -> isbn;

}

void MaterialBibliografico:: setIsbn(string isbn){
    this -> isbn = isbn;
}

string MaterialBibliografico:: getAutor(){
    return this -> autor;
}

void MaterialBibliografico:: setAutor(string autor) {
    this -> autor = autor;
}

bool MaterialBibliografico :: getPrestado() {
    return this -> prestado;
}

void MaterialBibliografico :: setPrestado(bool prestado) {
    this -> prestado = prestado;
}

MaterialBibliografico :: ~MaterialBibliografico() {
    cout << "se destruye material bibliografico" << mostrarInformacion << endl;
}