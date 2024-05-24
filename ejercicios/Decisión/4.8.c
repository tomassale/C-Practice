/*****************************************************************************************************
Realizar un programa que ingrese dos números e indique si el primer número es divisible por el segundo
*****************************************************************************************************/

#include <stdio.h>

int main(){
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if(num1 % num2 == 0){
       printf("El primer numero no es divisible por el segundo :(");
    }else{
        printf("El primer numero es divisible por el segundo :)");
    }

    return 0;
};
