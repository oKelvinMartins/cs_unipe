/*
3. Escreva um programa que solicite ao usuário 10 números inteiros e determine:
o maior número digitado;
o menor número digitado;
a diferença entre o maior e o menor número.
Restrição: não é permitido utilizar vetores ou matrizes.
*/ 

#include <stdio.h> 

int main() {
    int numero; 
    int maior, menor, diferenca;

    // 1. O loop roda de 1 até 10 
    for(int i = 1; i <= 10; i++) {
        printf("Digite o numero inteiro: ", i); 
        scanf("%d", &numero); 

        // 2. Lógica do Maior/Menor
        if (i == 1) {
            // Se for a primeira rodada do loop, o primeiro número assume ambos os postos
            maior = numero;
            menor = numero;
        } 
        else {
            // Nas rodadas seguintes, testa o novo número 
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }
    
    // cálculo final e mostrar resultado
    diferenca = maior - menor;
    
    printf("\n=== RESULTADOS ===\n");
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Diferenca: %d\n", diferenca);

    return 0;
}