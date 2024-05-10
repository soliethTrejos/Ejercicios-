/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 100) {
        sum += i * i; /*calcular el cuadrado de i y sumarlo a la suma*/
        i++;
    }

    cout << "Sum of squares: " << sum << std::endl;
    return 0;
}