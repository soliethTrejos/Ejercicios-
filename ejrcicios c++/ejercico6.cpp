/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 100;

    while (i <= 200) {
        if (i % 2 == 0) { 
            sum += i;
        }
        i++;
    }

    cout << "la suma de los numero pares : " << sum << endl;
    return 0;
}