#ifndef CALCULOS_H
#define CALCULOS_H

/**
 * @brief Calcula el monto del ISSS (Instituto Salvadoreño del Seguro Social) para un salario dado.
 *
 * La función calcularISSS multiplica el salario por el porcentaje correspondiente al ISSS
 * (0.075) para determinar el monto a pagar por concepto de ISSS.
 *
 * @note El techo de salario es igual a $1000, por lo que cualquier cantidad de más, será calculado con base a ese salario.
 *
 * @param salario El salario del empleado.
 * @return El monto del ISSS a pagar.
 */
double calcularISSS(double salario);

#endif