# Proyecto LPD - Grupo 2

<hr />

## Integrantes

- Martínez Valladares, David Salomón - MV12013
- Flores Meza, Mauricio Eduardo - FM20031
- Tejada Villatoro, LS - TV22008

## Descripción

Este proyecto es parte del curso de `Lógica de Programación` y tiene como objetivo desarrollar una aplicación de gestión
de empleados en C++. La aplicación lee un archivo de texto que contiene información básica de los empleados y permite
realizar diversas operaciones sobre ellos.

Nuestro proyecto se enfoca en el rubro de una `Fábrica de bolsas y paquetes`

## Funcionalidades

- Lectura de archivo de texto con información de empleados.
- Una opción para ordenar a los empleados alfabéticamente por el primer apellido
- Una opción para ordenar a los empleados por el sueldo ya con el cálculo de
  descuentos (de menor a mayor o de mayor a menor).
- Una opción que nos muestre la cantidad de empleados según sus roles.
- Una opción que nos permita agregar nuevos empleados en cualquiera de los roles.

## Requisitos

- Compilador de C++ compatible (ej. g++).
- Sistema operativo compatible (ej. Windows, macOS, Linux).

## Instrucciones de Uso

1. Clona el repositorio o descarga los archivos del proyecto.
2. Abre una terminal y navega hasta el directorio del proyecto.
3. Compila los archivos fuente ejecutando el siguiente comando:
   ```shell
   g++ -std=c++17 src/*.cpp -o out/GestionDeEmpleados

4. Ejecuta la aplicación con el siguiente comando:

   ```shell
   ./out/GestionDeEmpleados
5. También puedes correrla en una sola línea así:

   ```shell
   g++ -std=c++17 src/*.cpp -o out/GestionDeEmpleados && ./out/GestionDeEmpleados

Sigue las instrucciones en pantalla para interactuar con la aplicación y gestionar los empleados.