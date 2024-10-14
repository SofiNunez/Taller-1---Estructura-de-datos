#include <iostream>
#pragma once

using namespace std;

class MaterialBibliografico {
    protected:
        string nombre;
        string isbn;
        string autor;
        bool prestado;
        
    public:
        MaterialBibliografico(string nombre, string isbn, string autor, bool prestado);
        virtual void mostrarInformacion();
        string getNombre();
        void setNombre(string nombre);
        string getIsbn();
        void setIsbn(string isbn);
        string getAutor();
        void setAutor(string autor);
        bool getPrestado(); 
        void setPrestado(bool prestado);
         ~MaterialBibliografico();
        
};