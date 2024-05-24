/****************************************************************************************************
Un fabricante de repuestos para tractores ha descubierto que ciertos art�culos identificados por los
n�meros de cat�logo 12121 al 18081; 30012 al 45565 y 67000 al 68000 son defectuosos. Se desea
confeccionar un programa al que inform�ndole el n�mero de cat�logo indique si el art�culo es o no
defectuoso. Los art�culos del cat�logo van desde el 1200 al 90000. Si se ingresa otro n�mero informar
�FUERA DE CATALOGO�.
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
