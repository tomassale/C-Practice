/****************************************************************************************************
Confeccionar un programa que permita determinar e informar en cuantos de los numeros enteros
comprendidos entre 10001 y 90009 existen mas cifras 3 que 4. Debe existir por lo menos, un 4 para que
sea considerado el numero como valido. Para resolverlo confeccionar una funcion llamada CIFRAS, que
pueda determinar cuantas cifras "n" existen en un numero de 5 cifras.
****************************************************************************************************/

#include <stdio.h>

int Cifras(int, int);

int main(){

    int mayores = 0;

    for(int i = 10001;i < 90009;i++){
        int cuentaTres = Cifras(3, i);
        int cuentaCuatro = Cifras(4, i);
        if(cuentaTres > cuentaCuatro && cuentaCuatro > 0){
            mayores++;
        }
    }
    printf("\nLa cantidad de numero con mas 3 que 4 son %d", mayores);
    return 0;
}

int Cifras(int num, int cifra) {
    int numero = 0;
    
    for (int i = 0; i < 5; ++i) {
        if (cifra % 10 == num) {
            numero++;
        }
        cifra /= 10;
    }
    
    return numero;
}
