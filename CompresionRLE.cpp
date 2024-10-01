
#include "CompresionRLE.h"
#include <iostream>
#include <sstream>

// Método para comprimir los datos usando RLE
std::string CompresionRLE::comprimir(const std::string& datos) {
    std::stringstream resultado;
    int longitud = datos.length();

    for (int i = 0; i < longitud; ++i) {
        int conteo = 1;
        while (i + 1 < longitud && datos[i] == datos[i + 1]) {
            ++conteo;
            ++i;
        }
        resultado << datos[i] << conteo;
    }
    return resultado.str();
}

// Método para descomprimir los datos usando RLE
std::string CompresionRLE::descomprimir(const std::string& datosComprimidos) {
    std::stringstream resultado;
    int longitud = datosComprimidos.length();

    for (int i = 0; i < longitud; ++i) {
        char caracter = datosComprimidos[i];
        ++i;
        int conteo = datosComprimidos[i] - '0';  // Convertir char a int
        for (int j = 0; j < conteo; ++j) {
            resultado << caracter;
        }
    }
    return resultado.str();
}
