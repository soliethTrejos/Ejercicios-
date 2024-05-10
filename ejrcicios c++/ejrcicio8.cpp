/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/
#include <iostream>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    // Declarar los arreglos
    int vector1[100]; // Suponemos un máximo de 100 elementos
    int vector2[100];
    int productoPunto = 0;

    int contador = 0;

    // Ingresar elementos del primer vector
    cout << "Ingrese los elementos del primer vector:" << endl;
    while (contador < longitud) {
        cout << "Elemento " << contador + 1 << ": ";
        cin >> vector1[contador];
        contador++;
    }

    contador = 0; // Reiniciamos el contador para el segundo vector

    // Ingresar elementos del segundo vector
    cout << "Ingrese los elementos del segundo vector:" << endl;
    while (contador < longitud) {
        cout << "Elemento " << contador + 1 << ": ";
        cin >> vector2[contador];
        contador++;
    }

    contador = 0; // Reiniciamos el contador para el producto punto

    // Calcular el producto punto de los vectores
    while (contador < longitud) {
        productoPunto += vector1[contador] * vector2[contador];
        contador++;
    }

    // Mostrar el resultado del producto punto
    cout << "El producto punto de los vectores es: " << productoPunto << endl;

    return 0;
}
