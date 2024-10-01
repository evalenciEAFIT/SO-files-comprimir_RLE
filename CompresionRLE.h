
#ifndef COMPRESIONRLE_H
#define COMPRESIONRLE_H

#include <string>

class CompresionRLE {
public:
    // Método para comprimir los datos usando RLE
    std::string comprimir(const std::string& datos);

    // Método para descomprimir los datos usando RLE
    std::string descomprimir(const std::string& datosComprimidos);
};

#endif
