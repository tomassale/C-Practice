/********************************************************************************************************
Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
y un código que indica la forma de pago. El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
Nota: El IVA corresponde al 21% del total de ventas.
*******************************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(){

    char codigo;
    float
    precio,
    iva = 0.21,
    ventasTarjeta = 0,
    ventasEfectivo = 0,
    ventasCheque = 0,
    totalVentas = 0,
    importeIva = 0;

    do{
        printf("*************************\n");
        printf("Ingrese el codigo: ");
        scanf(" %1c", &codigo);

        codigo = toupper(codigo);

        if(codigo == 'F'){
            printf("Dia finalizado, imprimiendo ticket de venta\n");
            break;
        }

        printf("Ingrese el precio: ");
        scanf("%f", &precio);

        switch(codigo){
        case 'C':
            ventasCheque += precio * 1.2;
            break;
        case 'E':
            ventasEfectivo += precio * 0.9;
            break;
        case 'T':
            ventasTarjeta += precio * 1.12;
            break;
        default:
            printf("Codigo invalido, Intente nuevamente\n");
        }
    }while(codigo != 'F');

    totalVentas = ventasCheque + ventasTarjeta + ventasEfectivo;
    importeIva = totalVentas * iva;

    printf("\n");
    printf("Efectivo en caja: $%7.2f\n", ventasEfectivo);
    printf("Ventas con Tarjeta de Credito: $%7.2f\n", ventasTarjeta);
    printf("Ventas con cheque: $%7.2f\n", ventasCheque);
    printf("Total de Venta: $%7.2f\n", totalVentas);
    printf("Importe de IVA: $%7.2f\n", importeIva);

    return 0;
}
