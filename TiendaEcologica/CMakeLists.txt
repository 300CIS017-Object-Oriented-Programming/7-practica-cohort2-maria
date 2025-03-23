cmake_minimum_required(VERSION 3.30)
project(TiendaEcologica)

set(CMAKE_CXX_STANDARD 20)

add_executable(TiendaEcologica
        main.cpp
        src/Tienda.cpp
        src/Tienda.h
        src/Producto.cpp
        src/Producto.h
        src/Venta.cpp
        src/Venta.h
        src/Cliente.cpp
        src/Cliente.h
)
