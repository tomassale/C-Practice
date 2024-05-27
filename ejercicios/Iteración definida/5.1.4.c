//Se ingresan 100 letras. Determinar la cantidad de vocales ingresadas.

#include <stdio.h>
#include <string.h>

int main(){

    char letra;
    int vocales = 0;

    for(int i = 0; i <= 100; i++){
        printf("Ingrese una letra (%d de 100): ", i + 1);
        scanf(" %c", &letra);
        switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            vocales++;
            break;
        }
    }

    printf("La cantidad de vocales ingresadas fue: %d", vocales);

    return 0;
}
