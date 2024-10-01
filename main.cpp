
#include "CompresionRLE.h"
#include <iostream>
#include <fstream>

int main() {
    std::string opcion;
    std::cout << "¿Deseas (1) comprimir o (2) descomprimir? ";
    std::cin >> opcion;

    std::string archivoEntrada, archivoSalida;
    std::cout << "Introduce el nombre del archivo de entrada: ";
    std::cin >> archivoEntrada;
    std::cout << "Introduce el nombre del archivo de salida: ";
    std::cin >> archivoSalida;

    std::ifstream archivo(archivoEntrada);
    std::string contenido((std::istreambuf_iterator<char>(archivo)), std::istreambuf_iterator<char>());
    archivo.close();

    CompresionRLE rle;
    if (opcion == "1") {
        std::string datosComprimidos = rle.comprimir(contenido);
        std::ofstream archivoSalidaComp(archivoSalida);
        archivoSalidaComp << datosComprimidos;
        archivoSalidaComp.close();
        std::cout << "Archivo comprimido con éxito." << std::endl;
    } else if (opcion == "2") {
        std::string datosDescomprimidos = rle.descomprimir(contenido);
        std::ofstream archivoSalidaDescomp(archivoSalida);
        archivoSalidaDescomp << datosDescomprimidos;
        archivoSalidaDescomp.close();
        std::cout << "Archivo descomprimido con éxito." << std::endl;
    } else {
        std::cerr << "Opción inválida." << std::endl;
    }

    return 0;
}
