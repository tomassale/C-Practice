/****************************************************************************************************
Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos
es igual a la suma de los otros dos.
****************************************************************************************************/
#include <stdio.h>

int main(){
   int num1, num2, num3, sum;
   printf("Ingrese un numero: ");
   scanf("%d", &num1);
   printf("Ingrese el segundo numero: ");
   scanf("%d", &num2);
   printf("Ingrese el tercer numero: ");
   scanf("%d", &num3);

   if((num2 + num3) == num1){
      printf("El numero %d es igual a la suma de los otros dos", num1);
   } else if((num1 + num3) == num2){
      printf("El numero %d es igual a la suma de los otros dos", num2);
   }else if((num1 + num2) == num3){
      printf("El numero %d es igual a la suma de los otros dos", num3);
   } else {
    printf("No hay sumas equivalentes en los numeros");
   };

   return 0;
}
