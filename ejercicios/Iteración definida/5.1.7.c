/**********************************************************************************************
 Dadas 20 notas y legajos de alumnos de un curso. Determinar:
a. Cantidad de alumnos aplazados.
b. Cuando la nota sea mayor a 7, mostrar el mensaje: “El alumno con legajo xxx ha Promocionado”
**********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int aplazados, nota, legajo;

    srand(time(NULL));

    for(int i = 20;i > 0;i--){
        int nota = (rand() % 10) + 1;
        int legajo = rand();

        if(nota > 7){
            printf("El alumno con legajo %d ha Promocionado\n", legajo);
        }else{
            aplazados++;
        }
    }

    printf("La cantidad de aplazados es: %d\n", aplazados);


    return 0;
}
