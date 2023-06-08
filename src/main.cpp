#include <iostream>

#include "../include/Empleado.h"
#include "../include/Gerente.h"
#include "../include/ListaEmpleados.h"

using namespace std;

int main() {
    ListaEmpleados lista;
    cout << "Hello, World!" << endl;
    Empleado david("David", "Martinez", "Soyapango", "07/09/1993", 'M');

    Gerente julio("Julio", "Alvarado", "SS", "02/08/1997", 'M');
    cout << julio.getEmpresa() << endl;
    cout << julio.getSalario() << endl;
    cout << julio.getCargo() << endl;

    lista.agregarEmpleado(david);
    lista.agregarEmpleado(julio);

    lista.mostrarEmpleados();


    return 0;
}
