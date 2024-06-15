/***************************************************************************************************
Confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean
menores que 600. (1 2 4 8 16 …)
***************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(){

    int num = 1;

    while(num < 600){
        printf("%d\n", num);
        num = num*2;
    }

    return 0;
}
