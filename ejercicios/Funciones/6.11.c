/*********************************************************************************************************
Realizar una funcion que permita sumar n dias a una fecha valida mostrando la fecha resultante. Si la fecha
recibida no es valida informarlo con un mensaje (validar utilizando la funcion del punto 9).
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int Validador(int, int, int);
int CalculadorDias(int, int);
void SumadorDias(int, int, int, int);

int main(){

    int diasSumados, dia, mes, anio;

    while(1){
        system("cls");
        printf("Ingrese la fecha: ");
        scanf(" %d %d %d", &dia, &mes, &anio);

        int val = Validador(dia, mes, anio);
        if(val == 0){
            continue;
        }else{
            printf("Ingrese dias a sumar: ");
            scanf(" %d", &diasSumados);
            SumadorDias(diasSumados, dia, mes, anio);
        }
        system("pause");
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

void SumadorDias(int sumador, int diaSuma, int mesSuma, int anioSuma) {
    diaSuma += sumador;

    while (1) {
        int diasMes = CalculadorDias(mesSuma, anioSuma);

        while (diaSuma > diasMes) {
            diaSuma -= diasMes;
            mesSuma++;
            if (mesSuma > 12) {
                mesSuma = 1;
                anioSuma++;
            }
            diasMes = CalculadorDias(mesSuma, anioSuma);
        }

        if (Validador(diaSuma, mesSuma, anioSuma)) {
            break;
        } else {
            diaSuma++;
        }
    }

    printf("La fecha es: %d %d %d\n", diaSuma, mesSuma, anioSuma);
}