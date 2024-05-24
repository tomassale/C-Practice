/******************************************************************************************************
Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo
ingresado corresponde a una vocal, con el mensaje “VOCAL”. y su correspondiente valor numérico en ASCII
*******************************************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char letra;

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    char mayuscula = toupper(letra);

    if(strchr("VOCAL", mayuscula)){
        printf("La letra '%c' se encuentra en el texto, con el valor %d", letra, mayuscula);
    }else{
        printf("La letra %c no se encuentra en el texto", letra);
    }

    return 0;
}
