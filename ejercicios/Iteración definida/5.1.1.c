//Mostrar por pantalla los números pares comprendidos entre 100 y 500.

int main(){

    int contador = 100;

    for(contador; contador != 500; contador++){
        if(contador % 2 == 0){
            printf("%d\n", contador);
        }
    }

    return 0;
}
