/**********************************************************************************************************
Calcular el factorial de un n�mero ingresado por teclado. El factorial se calcula como el producto de todos
los enteros positivos desde 1 hasta el n�mero. En matem�tica el factorial se expresa con el s�mbolo. Por
ejemplo, el factorial de 5 es 120 ya que 5! = 1 x 2 x 3 x 4 x 5 =120
**********************************************************************************************************/

#include <stdio.h>

int main(){
    int acum = 8;
    int factorial = 1;

    for(int i = 1;i <= acum; i++){
        factorial *= i;
    }

    printf("\nEl valor de %d! es: %d", acum, factorial);

    return 0;
}
