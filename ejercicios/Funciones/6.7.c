/***************************************************************************************************
Confeccionar un programa que permita ingresar diversas ternas de valores enteros mayores que 0 y
menores que 99. Finalizar el ingreso cuando se informen 3 valores iguales a 96, 97 y 98. Determinar e
informar para cada terna, el mayor y el menor de los valores. Confeccionar y utilizar una funcion con
parametros llamada MayorMenor, que permita calcular el menor o el mayor valor de la terna segun un
parametro de configuracion.
****************************************************************************************************/

#include <stdio.h>

void MayorMenor(int, int, int); 

int main(){
    
    int num1, num2, num3;

    while(1){
        printf("Ingrese una terna de numeros enteros (0 a 99): ");
        scanf(" %d %d %d", &num1, &num2, &num3);

        if(num1 == 96 && num2 == 97 && num3 == 98){
            printf("\nPrograma finalizado");
            return 0;
        }

        if((num1 < 0 || num1 > 99) || (num2 < 0 || num2 > 99) || (num3 < 0 || num3 > 99)){
            printf("Terna no valida\n");
        }else{
            MayorMenor(num1, num2, num3);
        }
    }

    return 0;
}

void MayorMenor(int num1, int num2, int num3){
    int mayor = num1;
    int menor = num1;

    if(num2 > mayor){
        mayor = num2;
    }
    if(num3 > mayor){
        mayor = num3;
    }

    if(num2 < menor){
        menor = num2;
    }
    if(num3 < menor){
        menor = num3;
    }

    printf("El mayor de la terna es: %d\n", mayor);
    printf("El menor de la terna es: %d\n", menor);
}