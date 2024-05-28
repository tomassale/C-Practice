/******************************************************************************************************
Confeccionar un programa que exhiba por pantalla una lista, a dos columnas, con los primeros 15 números
impares en la primera y los 15 primeros pares en la segunda, incluyendo los títulos.
******************************************************************************************************/

#include <stdio.h>

int main() {
    int impares = 1;
    int pares = 0;

    printf("IMPARES PARES\n");
    for(int i = 0;i <= 15;i += 2){

       printf("%d\t%d\n", impares, pares);

       pares += 2;
       impares += 2;
    }

    return 0;
}
