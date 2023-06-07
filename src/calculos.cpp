#include <cmath>
#include "../include/calculos.h"

double calcularISSS(double salario) {
    double isss;
    if (salario >= 1000) {
        isss = 1000 * 0.075;
    }
    isss = salario * 0.075;
    isss = floor(isss * 100) / 100;
    return isss;
}