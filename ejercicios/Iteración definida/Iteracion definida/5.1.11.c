/*******************************************************************************************************
Ingresar 18 valores de temperatura distintos de cero. Se pide determinar e informar cuantas ternas (tres
valores seguidos) de valores positivos y cuantas de negativos hay.
*******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int temp, tempB = 0, tempC = 0;
    int ternasPositivas = 0, ternasNegativas = 0;

    srand(time(0));

    for (int i = 1; i <= 18; i++) {
        temp = (rand() % 50) - 15;
        if (temp == 0){
                printf("Numero Invalido\n");
        }

        if (i > 2) {
            if (tempC > 0 && tempB > 0 && temp > 0) {
                ternasPositivas++;
            } else if (tempC < 0 && tempB < 0 && temp < 0) {
                ternasNegativas++;
            }
        }

        tempC = tempB;
        tempB = temp;

        printf("Temperatura: %d\n", temp);
    }

    printf("\nLa cantidad de ternas positivas es: %d", ternasPositivas);
    printf("\nLa cantidad de ternas negativas es: %d\n", ternasNegativas);

    return 0;
}
