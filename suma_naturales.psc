Algoritmo suma_naturales
    Definir n, suma, i Como Entero;
    
    Escribir "Ingrese un n�mero natural n:";
    Leer n;
    
    suma <- 0;
    i <- 1;
    
    Mientras i <= n Hacer
        suma <- suma + i;
        i <- i + 1;
    FinMientras
    
    Escribir "La suma de los n�meros naturales desde 1 hasta ", n, " es: ", suma;
FinAlgoritmo

