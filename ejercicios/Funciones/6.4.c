/****************************************************************************************************************
Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10, para ello generar una funcion
que valide dicho ingreso. Calcular:
a. Cuentos numeros son primos.
b. Cantidad de numeros pares.
c. Promedio de los numeros impares.
Utilizar las siguientes funciones:
* Resto: recibe por parametro el Dividendo y el Divisor; Retorna el resto.
* EsPar: recibe por parametro un numero; Retorna 1 si es Par, 0 si es Impar; Invoca a la funcion Resto.
* EsPrimo: recibe por parametro un numero; Retorna 1 si es primo, 0 si no es primo; Invoca a la
funcion Resto. (un numero es primero si solo es divisible por 1 y por si mismo).
* Promedio: recibe por parametro la suma y el contador; Retorna el promedio si contador > 0 sino
Retorna 0.
****************************************************************************************************************/

#include <stdio.h>

int ValidarNumero(int);
int Resto(int, int);
int EsPar(int);
int EsPrimo(int);
int Promedio(int, int);

int main(){

    int num;
    while(1){
        printf("Ingrese un numero entero: ");
        scanf(" %d", &num);
        ValidarNumero(num);
    }
    return 0;
}

int ValidarNumero(int num){
    if(num == -10){
        printf("Ingreso Finalizado");
    }
    if(num < 1 || num > 50){
        printf("Numero invalido");
    }
}

int Resto(int , ){
    
}

int EsPar(){

}

int EsPrimo(){
    
}

int Promedio(){
    
}