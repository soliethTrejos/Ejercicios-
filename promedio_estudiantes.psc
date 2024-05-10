Algoritmo promedio_estudiantes
    Definir suma, nota, contador Como Real;
    
    suma <- 0;
    contador <- 1;
    
    Mientras contador <= 10 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        suma <- suma + nota;
        contador <- contador + 1;
    FinMientras;
    
    Escribir "El promedio general de la sección es: ", suma / 10;
FinAlgoritmo
