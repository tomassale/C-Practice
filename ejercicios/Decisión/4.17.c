/********************************************************************************************************
Confeccionar un programa que pueda determinar el importe a pagar por una prestaci�n m�dica seg�n su
c�digo. Los importes se cobran seg�n la siguiente tabla:
        C�digo Importe
          A      20
          D      40
          F      60
          M     150
          T     150
Se debe ingresar el n�mero de historia del paciente y el c�digo de la prestaci�n. Se debe emitir un ticket
con el n�mero de la historia, el c�digo y el importe a pagar
*********************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    int historia, importe;
    char codigo;

    printf("Escriba la historia y el codigo: ");
    scanf("%d %c", &historia, &codigo);

    switch(toupper(codigo)) {
        case 'A':
            importe = 20;
            break;
        case 'D':
            importe = 40;
            break;
        case 'F':
            importe = 60;
            break;
        case 'M':
            importe = 150;
            break;
        case 'T':
            importe = 150;
            break;
        default:
            importe = 0;
            printf("Codigo invalido\n");
            return 0;
    }

    printf("***Ticket***\nHistoria: %d\nCodigo: %c\nImporte: $%d\n*************", historia, toupper(codigo), importe);

    return 0;
}
