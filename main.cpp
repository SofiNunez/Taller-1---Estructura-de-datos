#include <iostream>
#include "Libro.h"
#include "MaterialBibliografico.h"
#include "Revista.h"
#include "Usuario.h"
#include "Biblioteca.h"
   

int main()
{
    
    Biblioteca biblioteca;
    int opcion;
    do{
        std::cout << "\n1. Agregar Libro\n2. Agregar Revista\n3. Agregar Usuario\n4. Prestar Material\n5. Devolver Material\n6. Mostrar Materiales\n7. Mostrar Usuarios\n8. Eliminar Usuario\n0. Salir\n";
        std::cin >> opcion;
        
        switch(opcion){
            case 1:{
                std::cout<<"Ingrese titulo: ";
                string titulo;
                std::cin >> titulo;
                std::cout<<"Ingrese autor: ";
                string autor;
                std::cin >> autor;
                std::cout<<"Ingrese ISBN: ";
                string isbn;
                std::cin >> isbn;
                std::cout<<"ingrese fecha de publicacion: ";
                string fecha;
                std::cin >> fecha;
                std::cout<<"Ingrese resumen: ";
                string resumen;
                std::cin >> resumen;
                
                MaterialBibliografico* libro = new Libro(titulo, isbn, autor, false, fecha, resumen);
                biblioteca.agregarMaterial(libro);
                break;
            }
            case 2:{
                std::cout << "Ingrese título: ";
                string titulo;
                std::cin >> titulo;
                std::cout << "Ingrese autor: ";
                string autor;
                std::cin >> autor;
                std::cout << "Ingrese ISBN: ";
                string isbn;
                std::cin >> isbn;
                std::cout << "Ingrese mes de publicación: ";
                string mes;
                std::cin >> mes;
                std::cout << "Ingrese número de edición: ";
                int edicion;
                std::cin >> edicion;
                
                MaterialBibliografico* revista = new Revista(titulo, isbn, autor, false, edicion, mes);
                biblioteca.agregarMaterial(revista);
                break;
            }
            case 3:{
                std::cout << "Ingrese nombre del usuario: ";
                string nombre;
                std::cin >> nombre;
                std::cout << "Ingrese ID del usuario: ";
                string id;
                std::cin >> id;
                
                Usuario* usuario = new Usuario(nombre, id);
                biblioteca.agregarUsuario(usuario);
                break;
            }
            case 4:{

                std::cout << "Ingrese ID del usuario: ";
                string idUsuario;
                std::cin >> idUsuario;
                Usuario* usuario = biblioteca.encontrarUsuario(idUsuario);
                if (usuario) {
                    std::cout << "Ingrese el título del material a prestar: ";
                    string tituloMaterial;
                    std::cin >> tituloMaterial;
                    MaterialBibliografico* material = biblioteca.buscarMaterial(tituloMaterial);
                    if (material && usuario->prestarMaterial(material)) {
                        std::cout << "Material prestado exitosamente.\n";
                    } else {
                        std::cout << "Error: Material no disponible o ya prestado.\n";
                    }
                } else {
                    std::cout << "Usuario no encontrado.\n";
                }
                break;
            }
                
            case 5: {
            
                
                std::cout << "Ingrese ID del usuario: ";
                string idUsuario;
                std::cin >> idUsuario;
                Usuario* usuario = biblioteca.encontrarUsuario(idUsuario);
                if (usuario) {
                    std::cout << "Ingrese el título del material a devolver: ";
                    string tituloMaterial;
                    std::cin >> tituloMaterial;
                    if (usuario->devolverMaterial(tituloMaterial)) {
                        std::cout << "Material devuelto exitosamente.\n";
                    } else {
                        std::cout << "Error: No se pudo devolver el material.\n";
                    }
                } else {
                    std::cout << "Usuario no encontrado.\n";
                }
                break;
            }
            case 6: {
                
                biblioteca.printMateriales();
                break;
            }
            case 7: {
                
                biblioteca.mostrarUsusarios();
                break;
            }
            case 8: {
            
                std::cout << "Ingrese ID del usuario a eliminar: ";
                string id;
                std::cin >> id;
                if (biblioteca.eliminarUsuario(id)) {
                    std::cout << "Usuario eliminado exitosamente.\n";
                } else {
                    std::cout << "Error: Usuario no encontrado.\n";
                }
                break;
            }
        }
            
        
    }while(opcion!=0);

    return 0;
}