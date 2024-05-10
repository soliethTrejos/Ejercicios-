/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream>
using namespace std;

int main() {
    int estudiantes = 10;
    double sumaNotas = 0.0;
    double nota;
    int contador = 0;
    /*Solicitamos las notas de cada estudiante*/

    while (contador < estudiantes) {
        cout << "Ingrese la nota del estudiante " << contador + 1 << ": ";
        cin >> nota;

        // Aseguramos que la nota esté dentro del rango válido (0-100)
        while (nota < 0 || nota > 100) {
           cout << "La nota debe estar entre 0 y 100. Ingrese nuevamente: ";
           cin >> nota;
        }

        sumaNotas += nota;
        contador++;
    }

    double promedio = sumaNotas / estudiantes;
    cout << "El promedio general de la sección es: " << promedio << endl;

    return 0;
}

