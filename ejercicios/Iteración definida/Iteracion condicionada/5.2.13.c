/************************************************************************************************************
Realizar un programa que le solicite al usuario el ingreso de una vocal (este dato de ingreso se debe
validar). Luego el programa debe dibujar en pantalla la vocal ingresada en cinco l�neas y cuatro columnas. La
vocal debe estar formada en cada car�cter por la misma letra en may�scula.
El programa finaliza al ingresar la letra f.
Restricciones: Por cada printf se debe exhibir un solo car�cter o salto de l�nea o espacio.
Ejemplos:
Ingreso del caracter a:
AAAA
A  A
AAAA
A  A
A  A
Ingreso del caracter e:
EEEE
E
EEEE
E
EEEE
Extender el programa para que la vocal se exhiba m�s grande ingresando un factor de multiplicaci�n.
Por ejemplo si se ingresa un 2 debe dibujarse el doble de grande la letra en pantalla.
************************************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(){

    char vocal;

    do{
        printf("Seleccione una vocal: ");
        scanf(" %c", &vocal);
        vocal = toupper(vocal);

        if(vocal == 'F'){
            printf("Bucle finalizado\n");
            return 0;
        }

        if(vocal == 'A'){
            printf("AAAA\n");
            printf("A  A\n");
            printf("AAAA\n");
            printf("A  A\n");
            printf("A  A\n");
        }else if(vocal == 'E'){
            printf("EEEE\n");
            printf("E\n");
            printf("EEEE\n");
            printf("E\n");
            printf("EEEE\n");
        }else if(vocal == 'I'){
            printf("\tI\n");
            printf("\n\tI\n");
            printf("\tI\n");
            printf("\tI\n");
            printf("\tI\n");
            printf("\tI\n");
        }else if(vocal == 'O'){
            printf("   OOO\n");
            printf(" O     O\n");
            printf("O\tO\n");
            printf("O\tO\n");
            printf("O\tO\n");
            printf(" O     O\n");
            printf("   OOO\n");
        }else if(vocal == 'U'){
            printf("U \t U\n");
            printf("U \t U\n");
            printf("U \t U\n");
            printf(" U\tU\n");
            printf("  UUUUUU\n");
        }
    }while(vocal != 'F');

    return 0;
}
