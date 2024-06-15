/************************************************************************************************************
Ingresar un número entero mayor a 0. Debe dibujar un triángulo rectángulo con * con tantas filas como
el número indicado. En cada fila se va incrementando la cantidad de asteriscos. Por ejemplo, si se ingresa el
número 6 debe mostrar en pantalla:
    *
    **
    ***
    ****
    *****
    ******
************************************************************************************************************/

int main(){

    int numero;
    char ast = '*';

    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &numero);

    for(int i = 0;i <= numero;i++){
        for(int j = 0;j < i;j++){
            printf("%c", ast);
        }
        printf("\n");
    }

    return 0;
}
