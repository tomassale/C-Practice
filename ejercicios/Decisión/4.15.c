/**************************************************************************************
 Un negocio de art�culos de computaci�n vende DVDs seg�n la siguiente escala de precios:
� sueltos, entre 1 y 9 a $15 c/u.
� la caja de 10 cuesta $120.
� la caja de 50 cuesta $500.
Si la compra excede las 100 unidades se efect�a un descuento del 10%.
NOTA: se aceptan compras entre 1 y 500 DVDs.
Se pide que se ingrese una cantidad de DVDs que se quiere comprar y calcule e informe
el importe a pagar.
***************************************************************************************/

#include <stdio.h>

int main(){

    int precio1, precio10, precio50, cantidadTotal;
    float precioFinal;
    int caja1 = 15;
    int caja10 = 120;
    int caja50 = 500;

    cantidadTotal = 115;

    precio50 = (cantidadTotal / 50) * caja50;
    precio10 = ((cantidadTotal % 50) / 10) * caja10;
    precio1 = (cantidadTotal % 10) * caja1;

    precioFinal = precio50 + precio10 + precio1;

    if(cantidadTotal > 100){
        precioFinal *= 0.9;
    }

    printf("Caja de 1: %d\n", precio1);
    printf("Caja de 10: %d\n", precio10);
    printf("Caja de 50: %d\n", precio50);
    printf("Precio Final: %.2f", precioFinal);

    return 0;
};
