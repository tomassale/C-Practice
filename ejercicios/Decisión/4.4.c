/**************************************************************************************
Ingresar 3 valores reales y:
    a. Si los dos primeros son mayores al tercero informar “MAYORES AL TERCERO”.
    b. Si los tres son iguales informar “TRES IGUALES.
    c. Si alguno de los dos primeros es menor al tercero informar “ALGUNO ES MENOR”.
**************************************************************************************/

#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Ingese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if(num1 > num3 && num2 > num3){
        printf("MAYORES AL TERCERO");
    }else if(num1 == num2 && num1 == num3){
        printf("TRES IGUALES");
    }else if(num1 < num3 || num2 < num3){
        printf("ALGUNO ES MENOR");
    }
    return 0;
}
