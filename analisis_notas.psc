Algoritmo analisis_notas
    Definir nota, contador, aprobados, reprobados Como Entero;
    Definir suma, promedio Como Real;
    
    contador <- 1;
    aprobados <- 0;
    reprobados <- 0;
    suma <- 0;
    
    Mientras contador <= 8 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        suma <- suma + nota;
        
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;
        Sino
            reprobados <- reprobados + 1;
        FinSi;
        
        contador <- contador + 1;
    FinMientras;
    
    promedio <- suma / 8;
    
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
FinAlgoritmo

