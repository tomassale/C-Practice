/********************************************************************************************************
Confeccionar un programa que permita ingresar varias ternas de valores a punto flotante, que finalice al
ingresar una terna con los valores ORDENADOS en forma creciente. Para cada terna exhibir la siguiente
pantalla:
** OPCIONES POSIBLES **
1 � Mayor valor
2 � Promedio
3 � Suma
4 - Finalizar
** Digite su opci�n:
Segun la opcion deseada debe aparecer en pantalla el resultado, sin borrar el menu. No admitir otros
valores de opcion. Confeccionar y utilizar una funcion PARA CADA UNA de las opciones y otra para detectar
la condicion final.
********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int Menu(void);
float Mayor(float, float, float);
float Promedio(float, float, float);
float Suma(float, float, float);
float Ordenado(float, float, float);

int main(){

    int menu;
    float num1, num2, num3, res;

    printf("Ingrese una terna de numeros a punto flotante: ");
    scanf(" %f %f %f", &num1, &num2, &num3);

    while(1){

        if(Ordenado(num1, num2, num3) == 1){
            printf("\nTerna ordenada, programa finalizado");
            return 0;
        }else{
            menu = Menu();
        }

        while(1){
            menu = Menu();

            switch (menu){
            case 1:
                res = Mayor(num1, num2, num3);
                printf("\nEl mayor valor es: %.2f\n", res);
                break;
            case 2:
                res = Promedio(num1, num2, num3);
                printf("\nEl promedio de los numeros es: %.2f\n", res);
                break;
            case 3:
                res = Suma(num1, num2, num3);
                printf("\nLa suma de los valores es: %.2f\n", res);
                break;
            case 4:
                system("cls");
                printf("Ingrese una nueva terna de numeros a punto flotante: ");
                scanf(" %f %f %f", &num1, &num2, &num3);
                break;
            default:
                printf("Numero invalido");
                continue;
            }
            system("pause");
            if(menu == 4){
                break;
            }
        }
    }

    return 0;
}

int Menu(void){

    system("cls");

    int num;

    printf("** OPCIONES POSIBLES **");
    printf("\n1. Mayor valor");
    printf("\n2. Promedio");
    printf("\n3. Suma");
    printf("\n4. Finalizar");
    printf("\n** Digite su opcion: ");
    scanf(" %d", &num);

    return num;

}

float Mayor(float num1, float num2, float num3){

    float mayor = num1;
    if(num2 > mayor){
        mayor = num2;
    }
    if(num3 > mayor){
        mayor = num3;
    }

    return mayor;
}

float Suma(float num1, float num2, float num3){
    float suma = num1 + num2 + num3;
    return suma;
}

float Promedio(float num1, float num2, float num3){
    float sumaPrommedio = Suma(num1, num2, num3);
    return sumaPrommedio / 3.;
}

float Ordenado(float num1, float num2, float num3){
    return (num1 >= num2 && num2 >= num3) ? 1 : 0;
}