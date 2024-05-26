/******************************************************************************************************
Confeccionar un programa que permita ingresar la fecha actual (día, mes y año) y la fecha de nacimiento
de una persona (día, mes y año). Con ambos datos debe calcular la edad de dicha persona.
*******************************************************************************************************/

#include <stdio.h>

int main(){

    int edad, dia, mes, anio, fechaDia, fechaMes, fechaAnio;

    printf("Ingrese dia, mes, anio (DD-MM-AAAA): ");
    scanf("%2d %2d %4d", &dia, &mes, &anio);
    printf("Ingrese su cumpleanios (DD-MM-AAAA): ");
    scanf("%2d %2d %4d", &fechaDia, &fechaMes, &fechaAnio);

    edad = anio - fechaAnio;

    if((anio > 2024 || anio < 1924) || (fechaAnio > anio || fechaAnio < 1924)){
        printf("Anio invalido, seleccione uno correcto");
        return 0;
    }else{
        if((mes < 1 || mes > 12) || (fechaMes < 1 || fechaMes > 12)){
            printf("Mes invalido, seleccione uno correcto");
            return 0;
        }else{
            if((dia < 1 || dia > 32) || (fechaDia < 1 || fechaDia > 32)){
                printf("Dia invalido, seleccione uno correcto");
                return 0;
            }else{
                switch(mes){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    if(dia > 31 || fechaDia > 31){
                        printf("Dia invalido, seleccione uno correcto");
                        return 0;
                    }
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if(dia > 30 || fechaDia > 31){
                        printf("Dia invalido, seleccione uno correcto");
                        return 0;
                    }
                    break;
                case 2:
                    if(((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) || ((fechaAnio % 4 == 0 && fechaAnio % 100 != 0) || (fechaAnio % 400 == 0))){
                        if(dia > 29 || fechaDia > 29){
                            printf("Dia invalido, seleccione uno correcto");
                            return 0;
                        }
                        return 0;
                    }else{
                        if(dia > 28 || dia > 28){
                           printf("Dia invalido, seleccione uno correcto");
                           return 0;
                        }
                        return 0;
                    }
                    break;
                default:
                    if(mes < fechaMes){
                        edad--;
                    }else{
                        if(dia < fechaDia){
                            edad--;
                        }
                    }
                }
            }
        }
    }

    printf("Tienes %d anios", edad);

    return 0;
}
