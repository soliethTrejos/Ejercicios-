/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cout << "Ingrese un número natural: ";
    cin >> n;

    /*uso de bucle while*/
    while (i <= n) {
        sum = sum + i;
        i = i + 1;
    }
    /*fin del codigo */
    cout << "La suma de los números naturales desde 1 hasta " << n << " es: " << sum << endl;
    return 0;
}