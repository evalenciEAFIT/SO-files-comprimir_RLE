
# Compresor de Archivos con el Algoritmo RLE (Run-Length Encoding)

Este proyecto implementa un compresor y descompresor de archivos utilizando el algoritmo RLE (Run-Length Encoding). RLE es una técnica de compresión sin pérdida que reduce el tamaño de los datos al representar secuencias consecutivas de caracteres iguales por el carácter seguido del número de repeticiones.

## Algoritmo RLE

### Descripción
El algoritmo RLE recorre la cadena de entrada en busca de secuencias de caracteres repetidos y las reemplaza con una sola instancia del carácter y el número de repeticiones.

### Ejemplo
Para la cadena de entrada `AAABBCCCC`, el algoritmo RLE genera la cadena comprimida `A3B2C4`.

### Algoritmo RLE para Comprimir
1. Inicializar un contador de repeticiones en 1.
2. Recorrer cada carácter de la cadena de entrada.
3. Para cada carácter:
   - Si es igual al siguiente carácter, incrementar el contador de repeticiones.
   - Si es diferente, escribir el carácter y el contador en la cadena comprimida, y reiniciar el contador.
4. Al final de la cadena, escribir el último carácter y su contador.

### Algoritmo RLE para Descomprimir
1. Recorrer la cadena comprimida.
2. Para cada carácter, leer el carácter y su número de repeticiones.
3. Escribir el carácter tantas veces como indique el número en la cadena descomprimida.

### Pseudocódigo de las funciones

#### Función de Compresión RLE:
```
function comprimir(cadena):
    resultado = ""
    contador = 1
    for i = 1 to longitud(cadena):
        if cadena[i] == cadena[i-1]:
            contador = contador + 1
        else:
            resultado = resultado + cadena[i-1] + str(contador)
            contador = 1
    resultado = resultado + cadena[último] + str(contador)
    return resultado
```

#### Función de Descompresión RLE:
```
function descomprimir(cadena_comprimida):
    resultado = ""
    for i = 0 to longitud(cadena_comprimida):
        caracter = cadena_comprimida[i]
        contador = cadena_comprimida[i+1]
        resultado = resultado + repetir(caracter, contador)
    return resultado
```

### Archivos

Este proyecto consta de varios archivos clave:

- **CompresionRLE.h**: Contiene la definición de la clase `CompresionRLE`, que implementa los métodos para compresión y descompresión utilizando RLE.
- **CompresionRLE.cpp**: Implementa los métodos definidos en `CompresionRLE.h`.
- **main.cpp**: Contiene la lógica principal del programa, donde el usuario selecciona si desea comprimir o descomprimir un archivo.
- **Makefile**: Archivo que define cómo compilar y ejecutar el programa.

### Código de las funciones en C++

#### Función de Compresión:
```cpp
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
```

#### Función de Descompresión:
```cpp
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
```

### Cómo Ejecutar

#### Compilar el proyecto
Para compilar el proyecto, ejecuta el siguiente comando:
```
make
```

#### Ejecutar la compresión o descompresión
Después de compilar, puedes ejecutar el programa y seleccionar si deseas comprimir o descomprimir un archivo:
```
./main
```

#### Ejemplo de uso
1. Para comprimir un archivo:
```
./main
```
Luego selecciona la opción `1` y proporciona los nombres de los archivos de entrada y salida.
   
2. Para descomprimir un archivo:
```
./main
```
Luego selecciona la opción `2` y proporciona los nombres de los archivos de entrada y salida.
