/**********************************************************************************************************
Ingresar diversos quintetos de números positivos de 1 cifra c/u, finalizando cuando las cinco cifras leídas
sean iguales a cero. Determinar e informar cuantos de los quintetos ingresados han formado números
capicúas 'triples' y cuantos 'quíntuples'.
**********************************************************************************************************/

#include <stdio.h>

int main(){

    int num1, num2, num3, num4, num5;
    int
        capicuaTriple = 0,
        capicuaQuintuples = 0;

    do{
        printf("Ingrese el numero: ");
        scanf(" %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
        if(num1 == 0 && num2 == 0 && num3 == 0 && num4 == 0 && num5 == 0){
            printf("\nPrograma finalizado");
            break;
        }
        if(num1 == num5 && num2 == num4){
            capicuaQuintuples++;
        }else if(num1 == num3 || num2 == num4 || num3 == num5){
            capicuaTriple++;
        }
    }while(num1 != 0 || num2 != 0 || num3 != 0 || num4 || 0 && num5 != 0);

    printf("\nCapicuas triples: %d", capicuaTriple);
    printf("\nCapicuas quintuples: %d", capicuaQuintuples);

    return 0;
}
