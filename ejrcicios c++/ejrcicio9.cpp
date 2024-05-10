/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/
#include <iostream>

using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;

    /*Solicitar las dimensiones de la primera matriz*/
    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnas1;

    /* Solicitar las dimensiones de la segunda matriz*/
    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnas2;

    /* Verificar si las dimensiones son compatibles para la multiplicación*/
    if (columnas1 != filas2) {
        cout << "Error: Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 1; /*Salir del programa con un código de error*/
    }

    /*Declarar las matrices*/
    int matriz1[10][10]; /* Suponemos un máximo de 10 filas y 10 columnas*/
    int matriz2[10][10];
    int matrizResultado[10][10]; /*La matriz resultante tiene máximo 10 filas y 10 columnas*/

    /*Ingresar elementos de la primera matriz*/
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    /*Ingresar elementos de la segunda matriz*/
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }

    /*Realizar la multiplicación de matrices*/
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    /*Mostrar la matriz resultante*/
    cout << "La matriz resultante de la multiplicación es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
