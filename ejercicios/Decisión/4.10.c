/***************************************************************************************************************
Confeccionar un programa que permita convertir grados sexagesimales a radianes y viceversa, seg�n el
valor de un c�digo que se ingresa junto al valor. Si c�digo = 1 se ingresan grados, si es 2 se ingresan radianes.
****************************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){

    int valor,codigo;
    float resultado;

    printf("Ingrese el valor a transformar y el codigo: ");
    scanf("%d %d", &valor, &codigo);

    if(codigo == 1){
        resultado = (M_PI/180) * valor;
        printf("El resultado en radianes es %.2f", resultado);
    }else if(codigo == 2){
        resultado = (180/M_PI) * valor;
        printf("El resultado en grados es %d", resultado);
    }else{
        printf("Seleccione un codigo");
        return 0;
    }

    return 0;
}
