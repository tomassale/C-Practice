/*********************************************************************************************
Escribir las sentencias que permitan el ingreso correcto del valor num�rico de un d�a y un mes
determinado. Por alg�n error volver a solicitar.
*********************************************************************************************/

#include <stdio.h>

int main(){

    int dia, mes;

    do{
        printf("Ingrese el dia: ");
        scanf("%d", &dia);
        printf("Ingrese el mes: ");
        scanf("%d", &mes);
        printf("\n");
    }while((dia < 1 || dia > 31) || (mes < 1 || mes > 12));

    return 0;
}
