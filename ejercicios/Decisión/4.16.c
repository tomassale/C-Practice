/********************************************************************************************************
Un negocio vende distintos art�culos identificados por un c�digo, seg�n se muestra:
    � c�digo 1; 10; 100: 10 pesos la unidad.
    � c�digo 2; 22; 222: 7 pesos la unidad. La caja de 10 unidades vale 65 pesos.
    � c�digo 3; 33: 3 pesos la unidad. Si la compra es por m�s de 10 unidades se hace un descuento del
    10% sobre el total de la compra.
    � c�digo 4; 44: 1 peso la unidad.
Confeccionar un programa que ingrese como dato el c�digo de un art�culo y la cantidad a comprar y se
informe el importe de la compra, con las siguientes leyendas:
    ART�CULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx
********************************************************************************************************/

#include <stdio.h>

int main() {
    float precio, precioFinal;
    int precioCodigo1, precioCodigo2, precioCodigo3, precioCodigo4, codigo, cantidad;

    printf("Ingrese el codigo del articulo: ");
    scanf("%d", &codigo);
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d", &cantidad);

    precioCodigo1 = 10;
    precioCodigo2 = 7;
    precioCodigo3 = 3;
    precioCodigo4 = 1;

    if (codigo == 1 || codigo == 10 || codigo == 100) {
        precioFinal = precioCodigo1 * cantidad;
    } else if (codigo == 2 || codigo == 22 || codigo == 222) {
        int precio10 = 65;
        if (cantidad >= 10) {
            int cantidad10 = (cantidad / 10) * precio10;
            int cantidadIndividual = (cantidad % 10) * precioCodigo2;
            precioFinal = cantidad10 + cantidadIndividual;
        } else {
            precioFinal = precioCodigo2 * cantidad;
        }
    } else if (codigo == 3 || codigo == 33) {
        precioFinal = precioCodigo3 * cantidad;
        if (cantidad > 10) {
            precioFinal *= 0.9;
        }
    } else if (codigo == 4 || codigo == 44) {
        precioFinal = precioCodigo4 * cantidad;
    } else {
        printf("C�digo de art�culo no v�lido.\n");
        return 0;
    }

    printf("ARTICULO %d CANTIDAD %d IMPORTE A PAGAR $ %.2f\n", codigo, cantidad, precioFinal);

    return 0;
}
