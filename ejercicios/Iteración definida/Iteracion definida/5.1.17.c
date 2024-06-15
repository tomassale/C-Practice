/**********************************************************************************************************
Ingresar N artículos (códigos) y sus correspondientes precios. Indicar el código del artículo más caro y el
precio del más barato. NOTA: todos los artículos tienen precios distintos.
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int codigo, cantidad, codigoAlto, codigoBajo;
    float precio;
    float precioAlto = 0;
    float precioBajo = 5000;

    printf("Ingrese una cantidad de productos: ");
    scanf("%d", &cantidad);

    srand(time(0));

    for(;cantidad > 0;cantidad--){
        codigo = (rand() % 2000) + 1000;
        precio = (float)(rand() % 5000) + 1000;

        printf("Codigo: %d\tPrecio: $%.2f\n", codigo, precio);

        if(precio > precioAlto){
            precioAlto = precio;
            codigoAlto = codigo;
        }
        if (precio < precioBajo){
            precioBajo = precio;
            codigoBajo = codigo;
        }
    }
    printf("\nEl precio mas alto es de codigo: %d", codigoAlto);
    printf("\nEl precio mas bajo es de codigo: %d", codigoBajo);

    return 0;
}
