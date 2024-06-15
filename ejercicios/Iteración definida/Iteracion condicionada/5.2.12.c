/***************************************************************************************
Confeccionar un programa que permita el ingreso de 6 ternas de valores enteros.
a. de cada terna informar el mayor valor y su orden en la terna.
b. de cada terna informar cuantos valores son múltiplos de 7.
c. de las 6 ternas determinar e informar el promedio de los primeros valores de cada una
***************************************************************************************/

#include <stdio.h>
#include <limits.h>

int main(){

    int
        multiplos7,
        num,
        ternas = 6;
    float promedio = 0;

    do{
        int i = 1,
        max = INT_MIN,
        indiceMax;
        while(i <= 3){
            printf("Ingrese una terna de numeros (terna %d/indice %d): ", ternas,i);
            scanf(" %d", &num);
            if(num % 7 == 0){
                multiplos7++;
            }
            if(i == 1){
                promedio += (float)num;
            }
            if(num > max){
                max = num;
                indiceMax = i;
            }
            i++;
        }
        printf("\n*******************\n");
        printf("El mayor es %d:%d\n", indiceMax, max);
        printf("*******************\n");
        ternas--;
    }while(ternas > 0);

    promedio /= 6.0;

    printf("\nLa cantidad de multiplos de 7 son: %d", multiplos7);
    printf("\nEl promedio de los primeros valores es: %.1f", promedio);

    return 0;
}
