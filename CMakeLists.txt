project("Calculadora")

SET(GCC_COVERAGE_COMPILE_FLAGS "-g -O0 -pipe -Wall")

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_CXX_COMPILE /usr/bin/clang)

add_executable(
    calculadora src/main.cpp
    src/Cola.cpp
    src/Elemento.cpp
    src/NodoCola.cpp
    src/NodoArbol.cpp
    src/NodoPila.cpp
    src/Pila.cpp
    src/Arbol.cpp
    src/Stoi.cpp
)
