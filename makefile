# Nombre del programa a generar
TARGET = main

# Compilador a utilizar
CXX = g++

# Opciones de compilación
CXXFLAGS = -std=c++11 -Wall

# Rutas de los archivos fuente
SRCDIR = .
VIEWDIR = view
CONTROLLERDIR = controller
COLLECTIONSDIR= collections
MODELDIR= model
STRUCTURESDIR= structures

# Archivos fuente
SRCS = $(wildcard $(SRCDIR)/*.cpp $(VIEWDIR)/*.cpp $(MODELDIR)/*.cpp $(CONTROLLERDIR)/*.cpp $(COLLECTIONSDIR)/*.cpp $(STRUCTURESDIR)/*.cpp)

# Archivos objeto generados a partir de los archivos fuente
OBJS = $(SRCS:.cpp=.o)

# Regla para la compilación de los archivos fuente
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para la generación del programa
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regla para ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJS) $(TARGET)
