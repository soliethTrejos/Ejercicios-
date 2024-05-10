/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/
#include <iostream>
using namespace std;

int main() {
    const int estudiantes = 8;
    int aprobados = 0;
    int reprobados = 0;
    double sumaNotas = 0.0;
    double nota;
    int contador = 0;
    /*double = flotante */

    while (contador < estudiantes) {
        cout << "Ingrese la nota del estudiante " << contador + 1 << ": ";
        cin >> nota;

        // Aseguramos que la nota esté dentro del rango válido (0-100)
        while (nota < 0 || nota > 100) {
            cout << "La nota debe estar entre 0 y 100. Ingrese nuevamente: ";
            cin >> nota;
        }

        sumaNotas += nota ; contador++;

        if (nota >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    double promedio = sumaNotas / estudiantes;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
