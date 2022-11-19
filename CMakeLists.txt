cmake_minimum_required(VERSION 3.21)
project(base_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_cpp main.cpp Empresa.cpp Empresa.h Vendedor.cpp Vendedor.h Venta.cpp Venta.h Zona.cpp Zona.h)
