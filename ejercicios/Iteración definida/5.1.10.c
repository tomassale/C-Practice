/********************************************************************************************************
Confeccionar un programa que solicite el ingreso de un valor entero N < 12 y luego una lista de N números
reales sobre la cual debe calcular:
    a. el promedio de los positivos.
    b. el promedio de los negativos.
    c. la cantidad de ceros.
Si el valor ingresado N es mayor que 12 informar 'VALOR EXCEDIDO” y si es menor o igual a 0 informar
“CANTIDAD INVALIDA”.
********************************************************************************************************/

#include <stdio.h>

int main(){

    int promedioPositivos, promedioNegativo;
    int cerosEnteros= 0;
    int cerosDecimal = 0;
    float numero = 1020304050.214567;

    //if(numero>12)printf("VALOR EXCEDIDO");
    //if(numero<=0)printf("CANTIDAD INVALIDA");

    int parte_entera = (int)numero;
    float parte_decimal = numero - (int)numero;

    for(;0;){

    }

    printf("%f", parte_decimal);

    return 0;
}
