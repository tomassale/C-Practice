/**********************************************************************************************************
Ingresar diversos quintetos de n�meros positivos de 1 cifra c/u, finalizando cuando las cinco cifras le�das
sean iguales a cero. Determinar e informar cuantos de los quintetos ingresados han formado n�meros
capic�as 'triples' y cuantos 'qu�ntuples'.
**********************************************************************************************************/

#include <stdio.h>

int main(){

    int num;
    float promedio;


    do{
        for(int i = 1;i <= 5; i++){
            printf("Ingrese el numero (Terna %d): ", i);
            scanf(" %d", &num);
            promedio += (float)num;
        }
        promedio /= 5;
    }while(promedio != 0.0);

    printf("%.2f", promedio);


    return 0;
}
