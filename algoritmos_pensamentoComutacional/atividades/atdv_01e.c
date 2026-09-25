#include <stdio.h> 

/* e) Desenvolva um algoritmo que receba um número inteiro e informe se ele é múltiplo de 5. */

int main() {
    int num, multiplo; 
    printf("Digite um numero: "); 
    scanf("%d", &num); 

    int divisao = num % 5; 

    if (divisao == 0) {
        multiplo = 1; 
    } else {
        multiplo = 0; 
    }
    printf("O numero %d e multiplo de 5: %s\n", num, multiplo ? "Sim" : "Nao");
    return 0;
}