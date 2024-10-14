#include <iostream>
#include "Libro.h"
#include "MaterialBibliografico.h"
#include "Revista.h"
#include "Usuario.h"
   

int main()
{
   
    //Biblioteca biblioteca;
    int opcion;
    do{
        std::cout << "\n1. Agregar Libro\n2. Agregar Revista\n3. Agregar Usuario\n4. Prestar Material\n5. Devolver Material\n6. Mostrar Materiales\n7. Mostrar Usuarios\n8. Eliminar Usuario\n0. Salir\n";
        std::cin >> opcion;
        
        switch(opcion){
            case 1:{
                std::cout<<"Ingrese titulo: ";
                std::string titulo;
                std::cin >> titulo;
                std::cout<<"Ingrese autor: ";
                std::string autor;
                std::cin >> autor;
                std::cout<<"Ingrese ISBN: ";
                std::string isbn;
                std::cin >> isbn;
                std::cout<<"ingrese fecha de publicacion: ";
                std::string fecha;
                std::cin >> fecha;
                std::cout<<"Ingrese resumen: ";
                std::string resumen;
                std::cin >> resumen;
                
                MaterialBibliografico* libro = new Libro(titulo, autor, isbn, fecha, resumen);
                biblioteca.agregarMaterial(libro);
                break;
            }
            case 2:{
                std::cout << "Ingrese título: ";
                std::string titulo;
                std::cin >> titulo;
                std::cout << "Ingrese autor: ";
                std::string autor;
                std::cin >> autor;
                std::cout << "Ingrese ISBN: ";
                std::string isbn;
                std::cin >> isbn;
                std::cout << "Ingrese mes de publicación: ";
                std::string mes;
                std::cin >> mes;
                std::cout << "Ingrese número de edición: ";
                std::string edicion;
                std::cin >> edicion;
                
                MaterialBibliografico* revista = new Revista(titulo, autor, isbn, mes, edicion);
                biblioteca.agregarMaterial(revista);
                break;
            }
            case 3:{
                std::cout << "Ingrese nombre del usuario: ";
                std::string nombre;
                std::cin >> nombre;
                std::cout << "Ingrese ID del usuario: ";
                std::string id;
                std::cin >> id;
                
                Usuario* usuario = new Usuario(nombre, id);
                biblioteca.agregarUsuario(usuario);
                break;
            }
            case 4:{
                std::string idUsuario, tituloMaterial;
                std::cout << "Ingrese ID del usuario: ";
                std::string idUsuario;
                std::cin >> idUsuario;
                Usuario* usuario = biblioteca.buscarUsuario(idUsuario);
                if (usuario) {
                    std::cout << "Ingrese el título del material a prestar: ";
                    std::string tituloMaterial
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
                std::string idUsuario, tituloMaterial;
                std::cout << "Ingrese ID del usuario: ";
                std::cin >> idUsuario;
                Usuario* usuario = biblioteca.buscarUsuario(idUsuario);
                if (usuario) {
                    std::cout << "Ingrese el título del material a prestar: ";
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
                std::string idUsuario;
                std::cin >> idUsuario;
                Usuario* usuario = biblioteca.buscarUsuario(idUsuario);
                if (usuario) {
                    std::cout << "Ingrese el título del material a devolver: ";
                    std::string tituloMaterial;
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
                /
                biblioteca.mostrarMateriales();
                break;
            }
            case 7: {
                
                biblioteca.mostrarUsuarios();
                break;
            }
            case 8: {
            
                std::cout << "Ingrese ID del usuario a eliminar: ";
                std::string id;
                std::cin >> id;
                if (biblioteca.eliminarUsuario(id)) {
                    std::cout << "Usuario eliminado exitosamente.\n";
                } else {
                    std::cout << "Error: Usuario no encontrado.\n";
                }
                break;
            }
        }
            
        }
    }while(opcion!=0);

    return 0;
}