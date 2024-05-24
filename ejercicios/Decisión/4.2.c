/**************************************************************************************************
Dados tres números determinar e informar con un mensaje si el primer número ingresado es menor que
los otros dos
**************************************************************************************************/

#include <stdio.h>;
#include <stdlib.h>;

int main(){
    int num1, num2, num3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);
    if(num1 < num2 && num1 < num3){
        printf("No es mayor el primer numero");
    }else{
        printf("El primer numero es mayor");
    };
    return 0;
};
