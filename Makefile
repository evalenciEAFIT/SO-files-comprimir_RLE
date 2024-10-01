
# Makefile para el proyecto de compresión RLE

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Archivos fuente
SOURCES = main.cpp CompresionRLE.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = main

# Regla para compilar todo
all: $(EXECUTABLE)

# Regla para compilar el ejecutable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar los archivos .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar los archivos objeto y el ejecutable
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
