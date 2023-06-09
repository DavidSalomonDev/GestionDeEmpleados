#include <iostream>
#include <iostream>
#include <fstream>
#include <filesystem>

#include "../include/Empleado.h"
#include "../include/Gerente.h"
#include "../include/Tecnico.h"
#include "../include/Supervisor.h"
#include "../include/Jefe.h"
#include "../include/ListaEmpleados.h"

using namespace std;
namespace fs = filesystem;

int main() {
    ListaEmpleados lista;
    cout << "Hello, World!" << endl;
    /*
    Tecnico david("David", "Martinez", "Soyapango", "07/09/1993", 'M');
    Tecnico roberto("Roberto", "M", "Soyapango", "07/09/1993", 'M');
    Jefe mario("Mario", "Valladares", "Soyapango", "07/09/1993", 'M');
    Gerente julio("Julio", "Alvarado", "SS", "02/08/1997", 'M');

    lista.addEmpleado(david);
    lista.addEmpleado(julio);
    lista.addEmpleado(mario);
    lista.addEmpleado(roberto);

*/

    string filePath = "empleados.csv";

    lista.addEmpleadosFromFile(filePath);


    lista.getEmpleados();
    cout << lista.size() << endl;

    lista.getEmpleadosByRole();


    return 0;
}
