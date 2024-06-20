/*********************************************************************************************************
Realizar una funcion que reciba 3 numeros enteros correspondientes al dia, mes y año de una fecha y valide
si la misma es correcta. En caso de que la fecha es correcta debe retornar un 1 y si es incorrecta debe
retornar un 0. Para la validacion usar la funcion del punto 8 que retorna la cantidad de dias de un mes.
*********************************************************************************************************/

#include <stdio.h>

int CalculadorDias(int, int);
int Validador(int, int, int);

int main() {
    int dia, mes, anio;

    while(1) {
        printf("Ingrese una fecha (dia mes anio): ");
        scanf("%d %d %d", &dia, &mes, &anio);

        int val = Validador(dia, mes, anio);
        printf("Validez: %d\n", val);
    }

    return 0;
}

int Validador(int dia, int mes, int anio) {
    if(anio < 1582 || anio > 2024) {
        printf("Anio incorrecto, ingreselo nuevamente\n");
        return 0;
    }
    if(mes < 1 || mes > 12) {
        printf("Mes incorrecto, ingreselo nuevamente\n");
        return 0;
    }
    if(dia < 1 || dia > CalculadorDias(mes, anio)) {
        printf("Dia incorrecto, ingreselo nuevamente\n");
        return 0;
    }
    return 1;
}

int CalculadorDias(int mes, int anio) {
    if(anio < 1582) {
        printf("Anio inválido\n");
        return 0;
    }
    switch (mes) {
    case 4: case 6: case 9: case 11:
        return 30;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 2:
        if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    default:
        printf("Numero de mes invalido\n");
        return 0;
    }
}
