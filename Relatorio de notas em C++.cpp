#include <stdio.h>

int main() {
    int numero;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    printf("\n Digite uma sequencia de numeros (encerre com um numero negativo):\n");

    while (1) {
        printf("\n Digite um numero: \n");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        if (numero >= 0 && numero <= 25) {
            intervalo1++;
        } else if (numero >= 26 && numero <= 50) {
            intervalo2++;
        } else if (numero >= 51 && numero <= 75) {
            intervalo3++;
        } else if (numero >= 76 && numero <= 100) {
            intervalo4++;
        }
    }

    printf("Quantidade de numeros no intervalo [0-25]: %i\n", intervalo1);
    printf("Quantidade de numeros no intervalo [26-50]: %i\n", intervalo2);
    printf("Quantidade de numeros no intervalo [51-75]: %i\n", intervalo3);
    printf("Quantidade de numeros no intervalo [76-100]: %i\n", intervalo4);


}
