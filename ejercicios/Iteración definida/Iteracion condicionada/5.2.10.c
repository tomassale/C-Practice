/**********************************************************************************************************
En un proceso de control se evalúan valores de temperatura, finalizando cuando de ingresa un valor
ficticio de temperatura -50.Determinar el valor máximo y mínimo medido y sus posiciones respecto al ingreso
**********************************************************************************************************/

#include <stdio.h>

int main(){

    int
        temp,
        max = -51,
        min = 51,
        pos_max,
        pos_min;
    int i = 0;

    do{
        printf("Ingrese la temperatura: ");
        scanf(" %d", &temp);

        if(temp > max){
            max = temp;
            pos_max = i;
        }else{
            min = temp;
            pos_min = i;
        }
        i++;
    }while(temp > -50);

    printf("**************************************\n");
    printf("El mayor numero es %d de posicion %d\n", max, pos_max + 1);
    printf("El menor numero es %d de posicion %d\n", min, pos_min + 1);

    return 0;
}
