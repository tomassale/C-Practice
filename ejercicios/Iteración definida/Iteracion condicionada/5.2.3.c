/********************************************************************************************************
Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un *. Se
desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos
tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros
símbolos que no sean ni letras ni números.
********************************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int numeros = 0;
    int mayusculas = 0;
    int minusculas = 0;
    int otros = 0;

    printf("Ingrese una secuencia de caracteres (finalice con '*'):\n");

    while ((ch = getchar()) != '*') {
        if (isdigit(ch)) {
            numeros++;
        } else if (isalpha(ch)) {
            if (isupper(ch)) {
                mayusculas++;
            } else if (islower(ch)) {
                minusculas++;
            }
        } else {
            otros++;
        }
    }

    printf("Cantidad de caracteres numericos: %d\n", numeros);
    printf("Cantidad de caracteres alfabeticos en mayusculas: %d\n", mayusculas);
    printf("Cantidad de caracteres alfabeticos en minusculas: %d\n", minusculas);
    printf("Cantidad de otros simbolos: %d\n", otros);

    return 0;
}
