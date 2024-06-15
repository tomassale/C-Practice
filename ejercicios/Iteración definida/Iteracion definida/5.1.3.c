//Se ingresan 50 números enteros. Determinar el promedio de los números pares.

#include <stdio.h>

int main(){

    float promedio = 0;
    int acumulador = 0;
    int contador = 0;

    for(int i = 0; i <= 50; i++){
        if(i % 2 == 0){
              acumulador += i;
              contador++;
        }
    }

    promedio = (float)acumulador / contador;
    printf("El promedio de los numeros es: %.2f\n", promedio);
    return 0;
}
