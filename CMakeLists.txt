cmake_minimum_required(VERSION 3.24)
project(proyecto_ldp135_gt2)

set(CMAKE_CXX_STANDARD 17)

add_executable(proyecto_ldp135_gt2 src/main.cpp include/Empleado.h src/Empleado.cpp include/Gerente.h src/Gerente.cpp include/Jefe.h src/Jefe.cpp include/Supervisor.h include/Tecnico.h src/Supervisor.cpp src/Tecnico.cpp include/ListaEmpleados.h src/ListaEmpleados.cpp)
