#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

#include "../include/Empleado.h"
#include "../include/Gerente.h"
#include "../include/Tecnico.h"
#include "../include/Supervisor.h"
#include "../include/Jefe.h"
#include "../include/ListaEmpleados.h"

using namespace std;
namespace fs = filesystem;

int main() {
	ListaEmpleados listaEmpleados;
	int opcion;
	bool opcionValida = false;
	do {
		cout << "Bienvenido al sistema de gestión de empleados de Bolsas y Paquetes, SA de CV" << endl;
		cout << "\n";
		cout << "======= Menú de Opciones =======" << endl;
		cout << "1. Agregar nuevo empleado" << endl;
		cout << "2. Ingresar empleados desde archivo CSV" << endl;
		cout << "3. Mostrar a todos los empleados" << endl;
		cout << "4. Ordenar empleados por primer apellido" << endl;
		cout << "5. Ordenar empleados por sueldo" << endl;
		cout << "6. Mostrar cantidad de empleados por rol" << endl;
		cout << "7. Salir" << endl;
		cout << "Ingrese el número de la opción deseada: ";
		if(!(cin >> opcion)){
			cout << "Opción inválida. Intente nuevamente." << endl;
			cin.clear();
			cin.ignore();
			continue;
		}
		
		switch (opcion) {
			case 1: {
				string nombre, apellido, direccion, fechaNacimiento, cargo;
				char sexo;
				int opcionCargo;
				while (!opcionValida) {
					cout << "Ingrese el cargo del nuevo empleado: " << endl;
					cout << "1. Gerente" << endl;
					cout << "2. Jefe de Área" << endl;
					cout << "3. Supervisor" << endl;
					cout << "4. Técnico" << endl;
					if(!(cin >> opcionCargo)){
						cout << "Opción inválida. Intente nuevamente." << endl;
						cin.clear();
						cin.ignore();
						continue;
					}
					switch (opcionCargo) {
						case 1:
							cargo = "Gerente";
							opcionValida = true;
							break;
						case 2:
							cargo = "Jefe de Área";
							opcionValida = true;
							break;
						case 3:
							cargo = "Supervisor";
							opcionValida = true;
							break;
						case 4:
							cargo = "Técnico";
							opcionValida = true;
							break;
						default:
							cout << "Opción inválida. Inténtalo de nuevo." << endl;
							break;
					}
					
				}
				
				cout << "Ingrese el nombre del nuevo empleado: ";
				cin.ignore();
				getline(cin, nombre);
				cout << "Ingrese el apellido del nuevo empleado: ";
				getline(cin, apellido);
				cout << "Ingrese la dirección del nuevo empleado: ";
				getline(cin, direccion);
				cout << "Ingrese la fecha de nacimiento del nuevo empleado: ";
				getline(cin, fechaNacimiento);
				cout << "Ingrese el sexo del nuevo empleado (M/F): ";
				cin >> sexo;
				
				Empleado *empleado = nullptr;
				if (cargo == "Gerente") {
					empleado = new Gerente(nombre, apellido, direccion, fechaNacimiento, sexo);
				} else if (cargo == "Jefe de Área") {
					empleado = new Jefe(nombre, apellido, direccion, fechaNacimiento, sexo);
				} else if (cargo == "Supervisor") {
					empleado = new Supervisor(nombre, apellido, direccion, fechaNacimiento, sexo);
				} else if (cargo == "Técnico") {
					empleado = new Tecnico(nombre, apellido, direccion, fechaNacimiento, sexo);
				}
				if (empleado != nullptr) {
					listaEmpleados.addEmpleado(*empleado);
					cout << "Empleado agregado correctamente." << endl;
				} else {
					cout << "Cargo inválido. No se pudo agregar el empleado." << endl;
				}
				break;
			}
			case 2: {
				string nombreArchivo;
				cout << "Ingrese el nombre del archivo CSV: ";
				cin >> nombreArchivo;
				listaEmpleados.addEmpleadosFromFile(nombreArchivo);
				cout << "Empleados agregados correctamente." << endl;
				break;
			}
			case 3: {
				listaEmpleados.getEmpleadosInfo();
				break;
			}
			case 4: {
				listaEmpleados.sortByApellido();
				listaEmpleados.getEmpleadosInfo();
				break;
			}
			case 5: {
				listaEmpleados.sortBySalarioNeto();
				listaEmpleados.getEmpleadosInfo();
				break;
			}
			case 6: {
				listaEmpleados.getEmpleadosByRole();
				break;
			}
			
			case 7: {
				cout << "Saliendo del programa..." << endl;
				break;
			}
			default: {
				cout << "Opción inválida. Intente nuevamente." << endl;
				break;
			}
		}
		
		cout << "\n";
		
	} while (opcion != 7);
	
	
	return 0;
}
