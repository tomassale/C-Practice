/************************************************************************************************
Se ingresan numeros enteros comprendidos entre 100 y 2000 (usar funcion LeerYValidar). Determinar
usando la funcion EstaDentroDelRango:
a. Cantidad de numeros ingresados entre 100 y 500
b. Cantidad de numeros pares ingresados entre 500 y 1200
c. Promedio de numeros ingresados entre 1200 y 2000
El ingreso de datos finaliza cuando se ingresa un numero igual a 99.
Para realizar este programa se deben realizar las siguientes funciones:

* EstaDentroDelRango: que reciba 3 enteros correspondientes a un numero a validar y los limites
superior e inferior del rango. La funcion debe retornar un 1 si el numero a validar se encuentra
dentro del rango indicado o un 0 si no lo esta.

* LeerYValidar: que reciba los limites superior e inferior de un rango y retorne un numero que se
encuentre dentro del mismo. (El ingreso de datos se realiza dentro de la funcipn). Para validar el
rango utilizar la funciun EstaDentroDelRango realizada en el punto anterior.
*************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int LeerYValidar(int, int);
int EstaDentroDelRango(int, int, int);

int main(){
    LeerYValidar(100, 2000);
    return 0;
}

int LeerYValidar(int limInf, int limSup){

    int numero, validacion;

    while(numero != 99){
        printf("Seleccione un numero entero (entre 100 y 2000): ");
        scanf(" %d", &numero);

        if(numero == 99){
            printf("\nProgama finalizado");
            return 0;
        }

        validacion = EstaDentroDelRango(numero, limInf, limSup);

        if(validacion == 0){
            printf("Ingrese un numero valido\n");
        }

    }

    return numero;
}

int EstaDentroDelRango(int num, int inf, int sup){

    if(num < inf || num > sup){
        return 0;
    }else{
        return 1;
    }
}