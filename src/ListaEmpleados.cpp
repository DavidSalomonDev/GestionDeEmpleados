#include <iostream>
#include "../include/ListaEmpleados.h"

using namespace std;

void ListaEmpleados::agregarEmpleado(const Empleado &empleado) {
    empleados.push_back(empleado);
}

void ListaEmpleados::mostrarEmpleados() {
    for (size_t i = 0; i < empleados.size(); i++) {
        cout << "======================================" << endl;
        cout << "Empleado No. " << i + 1 << ":" << endl;
        empleados[i].mostrarInformacion();
        cout << "======================================" << endl;
        cout << flush;
    }
}