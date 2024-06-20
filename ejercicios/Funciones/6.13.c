/***********************************************************************************************************
Realizar una funci�n que permita restar n d�as a una fecha v�lida mostrando la fecha resultante. Si la fecha
recibida no es v�lida informarlo conun mensaje (validar utilizando la funci�n del punto 9).
***********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int Validador(int, int, int);
int ContadorDias(int, int);
int RestadorDias(int, int, int, int);

int main(){

    int resta, dia, mes, anio;

    while(1) {
        system("cls");
        printf("Ingrese una fecha (dia mes anio): ");
        scanf("%d %d %d", &dia, &mes, &anio);

        int val = Validador(dia, mes, anio);
        if(val == 0){
            continue;
        }else{
            printf("Ingrese cuantos dias desea restar: ");
            scanf(" %d", &resta);
            RestadorDias(resta, dia, mes, anio);
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

int RestadorDias(int resta, int diaResta, int mesResta, int anioResta){

    diaResta -= resta;

    while(1){
        int diasMes = ContadorDias(mesResta, anioResta);
        while(diaResta < 1){
            mesResta--;
            diaResta += diasMes;
            if(mesResta < 1){
                mesResta = 12;
                anioResta--;
            }
            diasMes = ContadorDias(mesResta, anioResta);
        }
        if(diasMes >= diaResta){
            break;
        }else{
            diaResta--;
        }
    }

    return printf("La fecha es: %d %d %d\n", diaResta, mesResta, anioResta);
}
