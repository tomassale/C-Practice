/*********************************************************************************************************
Realizar una funci�n que permita sumar 1 d�a a una fecha v�lida mostrando la fecha resultante. Si la fecha
recibida no es v�lida informarlo con un mensaje (validar utilizando la funci�n del punto 9).
*********************************************************************************************************/

#include <stdio.h>

int Validador(int, int, int);
int ContadorDias(int, int);
int SumadorDias(int, int, int);

int main(){

    int dia, mes, anio;

    while(1) {
        printf("Ingrese una fecha (dia mes anio): ");
        scanf("%d %d %d", &dia, &mes, &anio);

        int val = Validador(dia, mes, anio);
        if(val == 0){
            continue;
        }else{
            SumadorDias(dia, mes, anio);
        }
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
    if(dia < 1 || dia > ContadorDias(mes, anio)) {
        printf("Dia incorrecto, ingreselo nuevamente\n");
        return 0;
    }
    return 1;
}

int ContadorDias(int mes, int anio) {
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

int SumadorDias(int diaSuma, int mesSuma, int anioSuma){
    
    diaSuma++;

    if(diaSuma > ContadorDias(mesSuma, anioSuma)){
        mesSuma++;
        diaSuma = 1;
        if(mesSuma > 12){
            anioSuma++;
            mesSuma = 1;
            diaSuma = 1;
        }
    }
    return printf("La fecha es: %d %d %d\n", diaSuma, mesSuma, anioSuma);
}