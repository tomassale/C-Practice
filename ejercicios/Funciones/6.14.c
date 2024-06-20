/***************************************************************************************************************
Realizar un programa que ingrese la fecha actual y la fecha de nacimiento de una persona y calcule su edad.
Para validar las fechas utilizdar la funcion del punto 9. Para el calculo realizar una funcion que reciba las dos
fechas y retorne la edad de la persona.
***************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int CalculadorEdad(int, int, int, int, int, int);
int ValidadorFechas(int, int, int);

int main(){

    int dia, mes, anio, diaCumple, mesCumple, anioCumple, edadUsuario;

    while(1){
        system("cls");
        printf("Ingrese la fecha de hoy: ");
        scanf(" %d %d %d", &dia, &mes, &anio);
        printf("Ingrese su fecha de nacimiento: ");
        scanf(" %d %d %d", &diaCumple, &mesCumple, &anioCumple);
        if(ValidadorFechas(dia, mes, anio) || ValidadorFechas(diaCumple, mesCumple, anioCumple)){
            printf("Fecha invalida\n");
            system("pause");
            continue;
        }else{
            edadUsuario = CalculadorEdad(dia, mes, anio, diaCumple, mesCumple, anioCumple);
            if(edadUsuario <= 0){
                printf("La fecha de nacimiento tiene que ser menor a la fecha actual\n");
            }else{
                printf("La edad del usuario es %d\n", edadUsuario);
            }
            system("pause");
        }
    }
    return 0;
}

int ValidadorFechas(int diaValid, int mesValid, int anioValid){
    if(anioValid > 1582) return 0;
    if(mesValid < 1 || mesValid > 12) return 0;

    switch (mesValid){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if(diaValid < 1 || diaValid > 31) return 0;
        break;
    case 4: case 6: case 9: case 11:
        if(diaValid < 1 || diaValid > 30) return 0;
        break;
    case 2:
        if((anioValid % 4 == 0 && anioValid % 100 != 0) || (anioValid % 400 == 0)){
            if(diaValid < 1 || diaValid > 29) return 0;
            break;
        }else{
            if(diaValid < 1 || diaValid > 28) return 0;
            break;
        }
    default:
        return 1;
        break;
    }
}


int CalculadorEdad(int dia, int mes, int anio, int diaCumple, int mesCumple, int anioCumple){

    int edad = anio - anioCumple;


    if((mes < mesCumple) || (mes == mesCumple && dia < diaCumple)){
        edad--;
    }

    if(edad <= 0){
        return -1;
    }

        return edad;
}
