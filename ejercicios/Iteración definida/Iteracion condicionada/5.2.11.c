//Se ingresan números enteros, hasta que se ingrese el número cero. Determinar los 2 valores mayores.

#include <stdio.h>
#include <limits.h>

int main(){

    int num,
        max1 = INT_MIN,
        max2 = INT_MIN;

    do{
        printf("Ingrese un numero: ");
        scanf(" %d", &num);

        if(num == 0){
            break;
        }

        if(num > max1){
            max1 = num;
        }else if(num > max2 && num < max1){
            max2 = num;
        }

    }while(num != 0);

    printf("\nEl primer numero mayor es %d", max1);
    printf("\nEl segundo numero mayor es %d", max2);

    return 0;
}
