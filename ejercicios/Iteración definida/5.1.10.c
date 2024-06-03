/********************************************************************************************************
Confeccionar un programa que solicite el ingreso de un valor entero N < 12 y luego una lista de N números
reales sobre la cual debe calcular:
a. el promedio de los positivos.
b. el promedio de los negativos.
c. la cantidad de ceros.
Si el valor ingresado N es mayor que 12 informar 'VALOR EXCEDIDO” y si es menor o igual a 0 informar
“CANTIDAD INVALIDA”.
********************************************************************************************************/

#include <stdio.h>

int main(){

    int numero;
    float num1, num2, mayor, menor;
    float promedioPositivos = 0;
    float promedioNegativos = 0;
    int ceros = 0;
    int positivos = 0;
    int negativos = 0;

    /*
    printf("\nIngrese un numero positivo menor a 12: ");
    scanf("%d", &numero);
    printf("\nIngrese un número real inicial: ");
    scanf("%f", &num1);
    printf("\nIngrese un numero real final: ");
    scanf("%f", &num2);
    */
    numero = 5;
    num1 = -16.040809;
    num2 = -50.050408;

    if(numero > 12){
        printf("VALOR EXCEDIDO");
        return 0;
    }
    if(numero <= 0){
        printf("CANTIDAD INVALIDA");
        return 0;
    }

    mayor = (num1 > num2) ? num1 : num2;
    menor = (num1 < num2) ? num1 : num2;

    for(int i = (int)mayor; i >= (int)menor; i--){

        int ent = i;
        double dec = i - ent;

        for (ent; ent != 0; ent /= 10) {
            if (ent % 10 == 0) {
                ceros++;
            }
        }

        for (dec; dec != 0; dec *= 10, dec -= (int)dec) {
            if ((int)(dec * 10) % 10 == 0) {
                ceros++;
            }
        }

        if(i > 0){
            promedioPositivos += i;
            positivos++;
        }else if(i < 0){
            promedioNegativos += i;
            negativos++;
        }else{
            ceros++;
        }
    }

    if(positivos > 0) {promedioPositivos /= positivos;}
    if(negativos > 0) {promedioNegativos /= negativos;}

    printf("El promedio de numeros positivos es: %.2f", promedioPositivos);
    printf("\nEl promedio de numeros negativos es: %.2f", promedioNegativos);
    printf("\nLa cantidad de ceros es: %d", ceros);

    return 0;
}
