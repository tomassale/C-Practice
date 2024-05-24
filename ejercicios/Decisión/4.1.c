 /****************************************************
 Se ingresan 3 números distintos. Determinar el mayor.
 *****************************************************/

#include <stdio.h>;
#include <stdlib.h>;

int main(){
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercen numero: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("El numero mas grande es: %d", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("El numero mas grande es: %d", num2);
    }else {
        printf("El numero mas grande es: %d", num3);
    }

    return 0;
};
