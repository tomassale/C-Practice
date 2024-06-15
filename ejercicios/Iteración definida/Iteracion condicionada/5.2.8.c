/***************************************************************************************************************
Confeccionar un programa que me permita calcular y mostrar una cantidad de números primos que se
solicita por la pantalla. Los números se calculan a partir del 2. Ejemplo: Si ingreso 6, genero los números: 2 –
3 - 5 - 7 - 11 - 13. El algoritmo para el cálculo de si un número es primo o no, debe estar optimizado para que
si encuentra un divisor no seguir buscando ya que se sabe que no es primo.
***************************************************************************************************************/

#include <stdio.h>

int main() {
    int primos,
        primo = 2;

    printf("Ingrese la cantidad de primos: ");
    scanf(" %d", &primos);

    if (primos <= 0) {
        printf("No puede ser menor a 1 el numero ingresado, intente con otro");
        return 0;
    }

    do {
        int es_primo = 1;

        for (int i = 2; i <= primo / 2; i++) {
            if (primo % i == 0) {
                es_primo = 0;
                break;
            }
        }
        if (es_primo) {
            printf("%d ", primo);
            primos--;
        }

        primo++;
    } while (primos > 0);

    return 0;
};
