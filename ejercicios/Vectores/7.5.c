/****************************************************************************************************
Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del dia.
Por cada pedido se recibe:
    * Codigo de producto (de 1 a 10)
    * Cantidad de unidades solicitadas
1.Se puede recibir mas de un pedido por producto.
2.La carga finaliza cuando se ingresa un producto con codigo igual a cero.
3.Al finalizar se debe emitir un listado con codigo y cantidad de unidades solicitadas de cada producto.
*****************************************************************************************************/

#include <stdio.h>

int main(){

    int pedidos[10] = {0};
    int codigo, cantidad;

    while(1){
        printf("Ingrese el codigo (1 a 10) y cantidad: ");
        scanf(" %d %d", &codigo, &cantidad);

        if(codigo == 0){
            printf("\nPrograma finalizado\n");
            break;
        }
        if(codigo < 1 || codigo > 10 || cantidad < 0){
            printf("Datos invalidos, ingreselos nuevamente\n");
            continue;
        }else{
            pedidos[codigo - 1] += cantidad;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("\nCodigo: %d Cantidad: %d", i + 1, pedidos[i]);
    }

    return 0;
}
