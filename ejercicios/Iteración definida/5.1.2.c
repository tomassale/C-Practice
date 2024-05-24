//Confeccionar un programa para calcular el valor de la siguiente suma: 100 + 95 + 90 + ... + 50.

#include <stdio.h>

int main(){

    int acumulador = 100;

    for(int i = 100; i > 50; i -= 5){
        acumulador = acumulador - 5 + i;
        printf("%d\n",acumulador);
    }

    return 0;
}
