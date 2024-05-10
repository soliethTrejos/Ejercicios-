/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/
#include <iostream>
using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    // Declarar los arreglos
    int vector1[100]; // Suponemos un máximo de 100 elementos
    int vector2[100];
    int vectorSuma[100];

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

    contador = 0; // Reiniciamos el contador para la suma

    // Calcular la suma de los vectores y almacenarla en el tercer vector
    while (contador < longitud) {
        vectorSuma[contador] = vector1[contador] + vector2[contador];
        contador++;
    }

    // Mostrar el resultado en el tercer vector
    cout << "La suma de los vectores es:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << vectorSuma[i] << " ";
    }
    cout << endl;

    return 0;
}
