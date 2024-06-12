/*******************************************************************************************
Se ingresan DNI y la nota promedio de 10 alumnos. Determinar el DNI del alumno de mayor nota
promedio (considerar único).
*******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int alumnos = 10;
    int dni, dniMayor;
    int nota1, nota2;
    float promedio, notaMayor = -1;

    srand(time(0));

    for(int i = 0; i < alumnos; i++){
        dni = (rand() % 50000000) + 30000000;
        nota1 = (rand() % 10) + 1;
        nota2 = (rand() % 10) + 1;

        promedio = (nota1 + nota2) / 2.0;

        printf("\nDNI: %d", dni);
        printf("\nPromedio: %.2f", promedio);

        if(promedio > notaMayor){
            notaMayor = promedio;
            dniMayor = dni;
        }
    }

    printf("\nEl DNI con mayor nota es: %d", dniMayor);

    return 0;
}
