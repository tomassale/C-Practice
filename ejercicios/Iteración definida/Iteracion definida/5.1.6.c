/***********************************************************
Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par.
***********************************************************/

#include <stdio.h>

int main(){
    int num1, num2, mayor, menor;
    int multiplo5 = 0;
    int acumuladorPar = 0;
    int acumulador3 = 0;

    printf("Seleccione un numero positivo: ");
    scanf("%d", &num1);
    printf("Seleccion otro numero positivo: ");
    scanf("%d", &num2);

    if(num1 < 1 || num2 < 1){
        printf("Solo son validos numeros mayores a 0");
        return 0;
    }

    if(num1 < num2){
        mayor = num2;
        menor = num1;
    }else{
        mayor = num1;
        menor = num2;
    }

    for(int i = menor;i <= mayor;i++){
        if(i % 3 == 0){
            acumulador3 += i;
        }
        if(i % 5 == 0){
            multiplo5++;
        }
        if(i % 2 == 0){
           acumuladorPar += i;
        }
    }

    printf("La sumatoria de multiplos de 3 es: %d\n", acumulador3);
    printf("La cantidad de valores multiplos de 5 es: %d\n", multiplo5);
    printf("El numero acumulado par es: %d", acumuladorPar);
    return 0;
}
