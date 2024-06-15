/**************************************************************************************************
Un negocio de perfumería efectúa descuentos en sus ventas según el importe de las mismas, con la
siguiente escala:
• menor a 50 pesos el 3.5%
• entre 50 y 150 pesos el 10%
• entre 151 y 300 pesos el 20%
• mayor a 300 pesos el 25%
Confeccionar un programa que:
a. Solicite un importe y calcule el descuento a efectuar y el importe neto a cobrar, con mensajes
aclaratorios.
b. Informe el importe promedio de todas las ventas realizadas.
Se debe contemplar que se puedan ingresar varios importes y para finalizar se ingresa un valor negativo o
cero.
**************************************************************************************************/

#include <stdio.h>

int main(){

    int contadorVentas = 0;
    float
        importe,
        descuento,
        precioAcumulado,
        precioFinal,
        promedioVentas;

    do{
        printf("Ingrese el valor de la compra: ");
        scanf(" %f", &importe);

        if(importe > 0){
            precioAcumulado += importe;
            contadorVentas++;
        }

    }while(importe > 0);

    if(precioAcumulado < 50){
        descuento = 3.5;
        precioFinal = precioAcumulado * (1 - 0.035);
    }else if(precioAcumulado > 50 && precioAcumulado < 150){
        descuento = 10;
        precioFinal = precioAcumulado * (1 - 0.1);
    }else if(precioAcumulado > 151 && precioAcumulado < 300){
        descuento = 20;
        precioFinal = precioAcumulado * (1 - 0.2);
    }else{
        descuento = 25;
        precioFinal = precioAcumulado * (1 - 0.25);
    }

    printf("*************************");
    if(contadorVentas > 0){
        promedioVentas = precioAcumulado / contadorVentas;
        printf("\nPrecio final: %.2f",  precioAcumulado);
        printf("\nValor neto: %.2f", precioFinal);
        printf("\nDescuento: %.1f%%", descuento);
        printf("\nPromedio de Ventas: %.2f", promedioVentas);
    }else{
        printf("\nNo se ingresaron ventas.");
    }

    return 0;
}
