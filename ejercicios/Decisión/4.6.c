/********************************************************************************************************
Confeccionar un programa que permita ingresar 4 números enteros, de a uno por vez y determine el menor
valor y su número de orden. Informe los valores ingresados e identifique al menor con mensaje aclaratorio.
********************************************************************************************************/

#include <stdio.h>

int main(){
    int num1, num2, num3, num4, menor, orden;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%d", &num4);

    if(num1<num2 && num1<num3 && num1<num4){
        menor = num1;
        orden = 1;
    }else if(num2<num1 && num2<num3 && num2<num4){
        menor = num2;
        orden = 2;
    }else if(num3<num1 && num3<num2 && num3<num4){
        menor = num3;
        orden = 3;
    }else{
        menor = num4;
        orden = 4;
    };

    printf("Los valores ingresados son %d, %d, %d y %d \n", num1, num2, num3, num4);
    printf("El menor numero es: %d\nY su ubicacion es: %d", menor, orden);

    return 0;
}
