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

    int 
        num, 
        primos = 0, 
        pares = 0, 
        acumuladorImpares = 0,
        contadorImpares = 0;
    float    
        promedioImpares = 0;

    while(1){
        printf("Ingrese un numero entero: ");
        scanf(" %d", &num);
        if(num == -10){
            printf("\nIngreso Finalizado");
            break;
        }
        if(ValidarNumero(num) == 0){
            continue;
        }
        if(EsPar(num) == 1){
            pares++;
        }else{
            acumuladorImpares += num;
            contadorImpares++;
        }
        if(EsPrimo(num) == 1){
            primos++;
        }
    }

    promedioImpares = Promedio(acumuladorImpares, contadorImpares);

    printf("\nLa cantidad de numeros pares es: %d", pares);
    printf("\nLa cantidad de numeros primos es: %d", primos);
    printf("\nEl promedio de numeros impares es: %.2f", promedioImpares);

    return 0;
}

int ValidarNumero(int num){
    if(num < 1 || num > 50){
        printf("Numero invalido\n");
        return 0;
    }
    return 1;
}

int Resto(int dividendo, int divisor){
    return dividendo % divisor;
}

int EsPar(int num){
    return Resto(num, 2) == 0 ? 1 : 0;
}

int EsPrimo(int num){
    if (num <= 1){
        return 0;
    }
    for(int i = 2; i <= num / 2; i++){
        if (Resto(num, i) == 0){
            return 0;
        }
    }
    return 1;
}

int Promedio(int suma, int cont){
    if(cont > 0){
        return (float)suma / cont;
    }
    return 0;
}