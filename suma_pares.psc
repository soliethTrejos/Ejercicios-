Algoritmo suma_pares
    Definir suma, numero Como Entero;
    
    suma <- 0;
    numero <- 100;
    
    Mientras numero <= 200 Hacer
        suma <- suma + numero;
        numero <- numero + 2;
    FinMientras;
    
    Escribir "La suma de los números pares entre 100 y 200 es: ", suma;
FinAlgoritmo
