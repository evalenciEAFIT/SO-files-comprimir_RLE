
# Compresor de Archivos con el Algoritmo RLE (Run-Length Encoding)

Este proyecto implementa un compresor y descompresor de archivos utilizando el algoritmo RLE (Run-Length Encoding). RLE es una técnica de compresión sin pérdida que reduce el tamaño de los datos al representar secuencias consecutivas de caracteres iguales por el carácter seguido del número de repeticiones.

## Algoritmo RLE

### Descripción
El algoritmo RLE recorre la cadena de entrada en busca de secuencias de caracteres repetidos y los reemplaza con una sola instancia del carácter y el número de repeticiones.

### Ejemplo
Para la cadena de entrada `AAABBCCCC`, el algoritmo RLE genera la cadena comprimida `A3B2C4`.

### Archivos

Este proyecto consta de varios archivos clave:

- **CompresionRLE.h**: Contiene la definición de la clase `CompresionRLE`, que implementa los métodos para compresión y descompresión utilizando RLE.
- **CompresionRLE.cpp**: Implementa los métodos definidos en `CompresionRLE.h`.
- **main.cpp**: Contiene la lógica principal del programa, donde el usuario selecciona si desea comprimir o descomprimir un archivo.
- **Makefile**: Archivo que define cómo compilar y ejecutar el programa.

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

### Notas Adicionales
- **Compresión**: Los datos comprimidos se guardan en formato texto, donde cada carácter es seguido por el número de repeticiones.
- **Descompresión**: Los datos comprimidos se expanden para restaurar la cadena original.
