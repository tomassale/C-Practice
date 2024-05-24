/******************************************************************************************************
Escribir un programa que solicite el a�o y el n�mero de mes y nos informe cuantos d�as tiene dicho mes.
Debemos considerar que el a�o puede ser bisiesto. Un a�o es bisiesto cuando es divisible por 4 y no por
100 o el a�o es divisible por 400.
******************************************************************************************************/

#include <stdio.h>

int main() {

    int mes, anio;

    printf("Ingrese mes y anio: ");
    scanf("%d %d", &mes, &anio);

    if(mes < 0 || mes > 12){
        printf("Ese mes no existe");
        return 0;
    };
    if(anio < 0){
        printf("Tiene que ser un a�o existente");
        return 0;
    };

    switch(mes){
        case 2:
            if((anio % 4 != 0 && anio % 100 == 0) || anio % 400 != 0){
                printf("El mes tiene 28 dias");
                return 0;
            } else {
                printf("El mes tiene 29 dias");
            }
            break;
        case 4:
        case 6:
        case 7:
        case 11:
            printf("El mes tiene 30 dias");
            break;
        default:
            printf("El mes tiene 31 dias");
            break;

    };

    return 0;
}
