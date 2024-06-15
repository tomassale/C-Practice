/********************************************************************************************************
Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 3 disparos,
registrándose las coordenadas X-Y de cada disparo. Determinar:
    a. Cuantos disparos se efectuaron en cada cuadrante por cada participante
    b. Cuantos disparos se efectuaron en total en el centro.
NOTA: no considere disparos sobre los ejes.
********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int ejeX, ejeY;
    int disparos = 3;
    int participantes = 5;
    int totalCentro = 0;

    srand(time(0));

    for(int i = participantes; i > 0; i--){
        int primerCuadrante = 0;
        int segundoCuadrante = 0;
        int tercerCuadrante = 0;
        int cuartoCuadrante = 0;
        int blanco = 0;

        for(int index = disparos; index > 0; index--){
            ejeX = (rand() % 21) - 10;
            ejeY = (rand() % 21) - 10;

            if(ejeX > 0 && ejeY > 0){
                primerCuadrante++;
            } else if(ejeX < 0 && ejeY > 0){
                segundoCuadrante++;
            } else if(ejeX < 0 && ejeY < 0){
                tercerCuadrante++;
            } else if(ejeX > 0 && ejeY < 0){
                cuartoCuadrante++;
            } else if(ejeX == 0 && ejeY == 0){
                blanco++;
            }
        }

        printf("\nParticipante: %d\n", i);
        printf("Primer Cuadrante: %d\n", primerCuadrante);
        printf("Segundo Cuadrante: %d\n", segundoCuadrante);
        printf("Tercer Cuadrante: %d\n", tercerCuadrante);
        printf("Cuarto Cuadrante: %d\n", cuartoCuadrante);
        printf("Centro: %d\n", blanco);
    }

    return 0;
}

