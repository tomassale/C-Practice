/*************************************************************************************************
Realizar un programa que:
a. Muestre todos los números primos entre 1 y 100. (Un nro. es primo cuando es divisible solamente
por 1 y por sí mismo)
b. Contar y mostrar la cantidad de primos encontrados.
*************************************************************************************************/

#include <stdio.h>

int main() {

    int primos = 0;

    for (int i = 2; i <= 100; i++) {
        int es_primo = 1;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                es_primo = 0;
            }
        }

        if (es_primo == 1) {
            primos++;
            printf("Primo: %d\n", i);
        }
    }

    printf("\nLa cantidad de primos encontrados entre 1 y 100 es: %d\n", primos);

    return 0;
}
