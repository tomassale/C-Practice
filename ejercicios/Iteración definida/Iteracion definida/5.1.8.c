/******************************************************************
Dadas las edades y estaturas de 45 alumnos de un curso. Determinar:
a. Edad promedio.
b. Estatura promedio.
c. Cantidad de alumnos mayores de 10 años.
d. Cantidad de alumnos que miden menos de 1.40 cm.
******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int edadPromedio, alturaPromedio;
    int mayoresEdad = 0;
    int menoresAltura = 0;

    srand(time(NULL));

    for(int i = 45;i > 0;i--){
        int edad = (rand() % 50) + 18;
        int altura = (rand() % (200 - 130 + 1)) + 130;

        edadPromedio += edad;
        alturaPromedio += altura;

        if(edad > 10){
            mayoresEdad++;
        }
        if(altura < 140){
            menoresAltura++;
        }
    }

    edadPromedio /= 45;
    alturaPromedio /= 45;

    printf("La edad promedio es: %d\n", edadPromedio);
    printf("La altura promedio es: %.2f\n", alturaPromedio / 100.0);
    printf("La cantidad de alumnos mayores de 10 anios: %d\n", mayoresEdad);
    printf("La cantidad de alumnos que miden menos de 1.40 m es: %d\n", menoresAltura);

    return 0;
}
