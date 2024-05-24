/*************************************************************
Se ingresan 3 números enteros. Informarlos en orden creciente.
*************************************************************/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Ingrese tres numeros enteros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Los numeros en orden creciente son: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
