#include <iostream>
#include "../include/calculos.h"

using namespace std;

int main() {
    double salario = 999.0;
    double resultado = calcularISSS(salario);
    std::cout << "El resultado del cálculo del ISSS es: " << resultado << std::endl;
    return 0;
}
