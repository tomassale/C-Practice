/*
 Tomando como base el ejercicio anterior ingresar un número entero mayor a 0 y dibujar un rombo con
*. Por ejemplo, si se ingresa el número 5 dibuja la pirámide de 5 filas y luego completa el rombo al ir
decrementando la cantidad de asteriscos.
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>

int main() {
    int cantidad;

    printf("Ingrese un numero entero mayor a 0: ");
    scanf("%d", &cantidad);

    if (cantidad > 0) {
        for (int i = 1; i <= cantidad; ++i) {
            for (int j = 1; j <= cantidad - i; j++) {
                printf(" ");
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                printf("*");
            }
            printf("\n");
        }
        for (int l = cantidad - 1;l > 0;l--){
            for(int m = 1;m <= cantidad - l; m++){
                printf(" ");
            }
            for(int n = 1;n <= 2 * l - 1;n++){
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("El número ingresado debe ser mayor a 0.\n");
    }

    return 0;
}
