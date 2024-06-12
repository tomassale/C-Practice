/**************************************************************************************************
Confeccionar un programa que determine e informe los n�meros perfectos comprendidos entre 1 y 9000.
Un n�mero es perfecto cuando es igual a la suma de sus divisores positivos menores que �l.
**************************************************************************************************/

#include <stdio.h>

int main(){

    for(int i = 9000;i > 0;i--){
        int suma = 0;
        for(int index = i - 1;index > 0;index--){
            if(i % index == 0){
                suma += index;
            }
        }
        if(suma == i){
            int perfecto = i;
            printf("Perfecto : %d\n", perfecto);
        }
    }

    return 0;
}
