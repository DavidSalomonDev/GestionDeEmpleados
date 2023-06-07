#include <string>

using namespace std;

#ifndef EMPLEADO_H
#define EMPLEADO_H

/**
 * @class Empleado
 * @brief Clase que representa a un empleado.
 */
class Empleado {
public:
    /**
     * @brief Constructor de la clase Empleado.
     * @param nombre El nombre del empleado.
     * @param apellido El apellido del empleado.
     * @param cargo El cargo del empleado.
     * @param salario El salario del empleado.
     * @param sexo El sexo del empleado.
     * @param fechaNacimiento La fecha de nacimiento del empleado.
     */
    Empleado(const string &nombre, const string &apellido, const string &cargo,
             double salario, char sexo, const string &fechaNacimiento);

    /**
     * @brief Obtiene el nombre del empleado.
     * @return El nombre del empleado.
     */
    string getNombre() const;

    /**
     * @brief Obtiene el apellido del empleado.
     * @return El apellido del empleado.
     */
    string getApellido() const;

    /**
     * @brief Obtiene el cargo del empleado.
     * @return El cargo del empleado.
     */
    string getCargo() const;

    /**
     * @brief Obtiene el salario del empleado.
     * @return El salario del empleado.
     */
    double getSalario() const;

    /**
     * @brief Obtiene el sexo del empleado.
     * @return El sexo del empleado.
     */
    char getSexo() const;

    /**
     * @brief Obtiene la fecha de nacimiento del empleado.
     * @return La fecha de nacimiento del empleado.
     */
    string getFechaNacimiento() const;

private:
    string nombre;            /**< Nombre del empleado */
    string apellido;          /**< Apellido del empleado */
    string fechaNacimiento;   /**< Fecha de nacimiento del empleado */
    string direccion;         /**< Dirección del empleado */
    string cargo;             /**< Cargo del empleado */
    double salario;           /**< Salario del empleado */
    char sexo;                /**< Sexo del empleado */

};

#endif // EMPLEADO_H