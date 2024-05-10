/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/
#include <iostream>
using namespace std;

int main() {
    int i = 99; 
    /*comienza desde 99, el número impar más grande menor que 100*/
    /*imprime los números impares en orden descendente*/

    while (i >= 1) {
        cout << i << " ";
        i -= 2; 
        /* disminuye en 2 para obtener el siguiente número impar*/
    }
    
    cout << endl;
    return 0;
}