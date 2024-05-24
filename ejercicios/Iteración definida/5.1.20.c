/***************************************************************************************************
Ingresar un n�mero entero mayor a 0. Debe dibujar una pir�mide con * con tantas filas como el n�mero
indicado. En cada fila se va incrementando la cantidad de asteriscos de 2 en 2.
Por ejemplo, si se ingresa el n�mero 5 debe mostrar en pantalla:

        *
       ***
      *****
     *******
    *********
**************************************************************************************************/

#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Ingrese un numero entero mayor a 0: ");
    scanf("%d", &n);

    if (n > 0) {
        for (i = 1; i <= n; ++i) {
            // Imprimir los espacios necesarios para alinear la pir�mide
            for (j = 1; j <= n - i; j++) {
                printf(" ");
            }
            // Imprimir los asteriscos en cada fila, incrementando de 2 en 2
            for (k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("El n�mero ingresado debe ser mayor a 0.\n");
    }

    return 0;
}

