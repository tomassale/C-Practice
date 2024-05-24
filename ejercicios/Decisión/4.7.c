/**************************************************************************************************************
Confeccionar un programa que solicite e ingrese 3 valores reales positivos, mayores que cero y determine
e informe si forman o no triángulo. Para ello utilizar el teorema de la desigualdad del triángulo que establece
que la suma de las longitudes de cualesquiera de dos lados de un triángulo es mayor que la longitud del
tercer lado.
**************************************************************************************************************/

#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    if(num1 <= 0 || num2 <= 0 || num3 <= 0){
      printf("Ingrese valores positivos mayores que 0");
      return 0;
    }

    if(num1 + num2 < num3 && num1 + num3 < num2 && num2 + num3 < num1){
        printf("Los valores ingresados no forman un triangulo");
    }else{
        printf("Hay triangulo!!!");
    };

    return 0;
}
