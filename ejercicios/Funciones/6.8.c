/************************************************************************************************************
Realizar una funcion que, dado un mes y un año, calcule la cantidad de dias de dicho mes. El año se utilizar
en el caso de que el mes sea febrero ya que los años bisiestos tienen 29 dias en lugar de 28.
Un año es bisiesto cuando: (el año es divisible por 4 y NO por 100) o (el año es divisible por 400).
************************************************************************************************************/

#include <stdio.h>

int calculadorDias(int, int);

int main(){

    int dias, mes, anio;

    while(1){
        printf("Ingrese mes y anio: ");
        scanf(" %d %d", &mes, &anio);
        dias = calculadorDias(mes, anio);
        printf("La cantidad de dias es: %d\n", dias);
        system("pause");
    }

    return 0;
}

int calculadorDias(int mes, int anio){
    if(anio < 1582){
        printf("Anio invalido\n");
        return 0;
    }
    switch (mes){
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 2:
        if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){
            return 29;
            break;
        }else{
            return 28;
            break;
        }
    default:
        printf("Numero invalido\n");
        break;
    }
}