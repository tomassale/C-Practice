/*****************************************************************************************************
La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente
escala:
Programación Inicial
Guía Práctica – V1.0 – Unidades 2 a 6 4 / 12
    a. menor de $55 el descuento es del 4.5%
    b. entre $55 y $100 el descuento es del 8%
    c. más de $100 el descuento es del 10.5%
Confeccionar un programa que reciba un importe e informe: el descuento y el precio neto a cobrar, con
mensajes aclaratorios
******************************************************************************************************/

#include <stdio.h>

int main(){

    float precio, descuento1, descuento2, descuento3;

    printf("Ingrese el precio de su compra: ");
    scanf("%f", &precio);

    descuento1 = 1 - 0.045;
    descuento2 = 1 - 0.08;
    descuento3 = 1 - 0.105;

    if(precio <= 0){
        printf("El precio tiene que ser mayor a 0");
        return 0;
    }else{
        if(precio < 55){
            precio *= descuento1;
        }else if(precio > 55 && precio < 100){
            precio *= descuento2;
        }else{
            precio *= descuento3;
        }
    }

    printf("El precio final es: %f", precio);

    return 0;
}
