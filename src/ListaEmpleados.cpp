#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <filesystem>
#include "../include/Gerente.h"
#include "../include/Jefe.h"
#include "../include/Supervisor.h"
#include "../include/Tecnico.h"
#include "../include/ListaEmpleados.h"

using namespace std;
namespace fs = std::filesystem;

void ListaEmpleados::addEmpleado(const Empleado &empleado) {
    empleados.push_back(empleado);
}

void ListaEmpleados::addEmpleadosFromFile(const string &nombreArchivo) {
    // Obtener la ruta de la carpeta data
    fs::path raizPath = fs::current_path().parent_path();
    fs::path archivoPath = raizPath / "data" / nombreArchivo;

    // Leer datos del archivo
    ifstream archivo(archivoPath);
    if (!archivo) {
        cerr << "Error al abrir el archivo: " << nombreArchivo << endl;
        return;
    }

    string linea;

    // Encabezado del archivo CSV
    getline(archivo, linea);

    while (getline(archivo, linea)) {
        // Leer datos de una cadena de texto (la linea)
        istringstream iss(linea);
        string empNum, nombre, apellido, direccion, fechaNacimiento, cargo;
        char sexo;

        // Obtener los valores de la línea separandolos por coma
        getline(iss, empNum, ',');
        getline(iss, nombre, ',');
        getline(iss, apellido, ',');
        getline(iss, direccion, ',');
        getline(iss, fechaNacimiento, ',');
        iss >> sexo; // Formato char
        iss.ignore(); // Cambiar formato en la nueva linea
        getline(iss, cargo, ',');

        Empleado *empleado = nullptr;

        if (cargo == "Gerente") {
            empleado = new Gerente(nombre, apellido, direccion, fechaNacimiento, sexo);
        } else if (cargo == "Jefe de área") {
            empleado = new Jefe(nombre, apellido, direccion, fechaNacimiento, sexo);
        } else if (cargo == "Supervisor") {
            empleado = new Supervisor(nombre, apellido, direccion, fechaNacimiento, sexo);
        } else if (cargo == "Técnico") {
            empleado = new Tecnico(nombre, apellido, direccion, fechaNacimiento, sexo);
        }

        if (empleado != nullptr) {
            empleados.push_back(*empleado);
        }
    }

    archivo.close();
}

void ListaEmpleados::getEmpleadoByInstance(const Empleado &empleado) {
    for (const auto &e: empleados) {
        if (e == empleado) {
            e.mostrarInformacion();
            return;
        }
        cout << "El empleado no se ha encontrado" << endl;

    }
}

void ListaEmpleados::getEmpleadoByFullName(string nombre, string apellido) {
    for (const auto &empleado: empleados) {
        if (empleado.getNombre() == nombre && empleado.getApellido() == apellido) {
            empleado.mostrarInformacion();
            return;
        }
    }
    cout << "No se encontró ningún empleado con ese nombre y apellido." << endl;
}

void ListaEmpleados::getEmpleados() {
    for (size_t i = 0; i < empleados.size(); i++) {
        cout << "======================================" << endl;
        cout << "Empleado No. " << i + 1 << ":" << endl;
        empleados[i].mostrarInformacion();
        cout << "======================================" << endl;
        cout << flush;
    }
}

void ListaEmpleados::getEmpleadosByRole() {
    // Mapa para almacenar la cuenta de empleados por rol
    map<string, int> conteoEmpleados;

    // Contar empleados por rol
    for (const auto &empleado: empleados) {
        string rol = empleado.getCargo();
        conteoEmpleados[rol]++;
    }
    cout << "Cantidad de empleados:" << endl;
    cout << "===================================" << endl;

    // Mostrar la cuenta de empleados por rol
    for (const auto &conteo: conteoEmpleados) {

        cout << "Cargo: " << conteo.first << ", Cantidad: " << conteo.second << endl;
    }

}

int ListaEmpleados::size() {
    return empleados.size();
}