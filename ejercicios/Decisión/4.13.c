/****************************************************************************************************
Un fabricante de repuestos para tractores ha descubierto que ciertos artículos identificados por los
números de catálogo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea
confeccionar un programa al que informándole el número de catálogo indique si el artículo es o no
defectuoso. Los artículos del catálogo van desde el 1200 al 90000. Si se ingresa otro número informar
“FUERA DE CATALOGO”.
*****************************************************************************************************/

#include <stdio.h>

int main(){

    int codigo;

    printf("Escriba el codigo de producto: ");
    scanf("%d", &codigo);

    if(codigo < 1200 || codigo > 90000){
        printf("FUERA DE CATALOGO");
        return 0;
    }else{
        if(codigo > 12121 && codigo < 18081){
            printf("PRODUCTO DEFECTUOSO");
        }else if(codigo > 30012 && codigo < 45565){
            printf("PRODUCTO DEFECTUOSO");
        }else if(codigo > 67000 && codigo < 68000){
            printf("PRODUCTO DEFECTUOSO");
        }else{
            printf("PRODUCTO CORRECTO");
        }
    }

    return 0;
}
