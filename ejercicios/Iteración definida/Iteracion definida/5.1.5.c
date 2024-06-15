/***************************************************************************************************
Confeccionar un programa para calcular la suma de los primeros N números naturales. El valor de N lo
solicita por teclado el programa.
***************************************************************************************************/

#include <stdio.h>

int main(){
    int natural;
    int acumulador = 0;

    printf("Seleccione un numero positivo: ");
    scanf("%d", &natural);

    for(int i = 0; i <= natural ;i++){
        acumulador += i;
    }

    printf("El numero acumulado es: %d", acumulador);
    return 0;
}
