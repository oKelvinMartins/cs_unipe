/*

5. Escreva um programa que solicite um número inteiro e apresente sua tabuada de 1 a 10.
Após apresentar a tabuada, pergunte ao usuário se deseja calcular a tabuada de outro número. O
programa deve continuar enquanto a resposta for "S" ou "s".

*/

#include <stdio.h> 

int main() {
    int numero;
    char resposta;


    do {
        printf("Digite um numero inteiro para ver sua tabuada: ");
        scanf("%d", &numero);

        printf("\n--- TABUADA DO %d ---\n", numero);
        
        // Loop interno: vai de 1 a 10 multiplicando o número
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
        
        printf("--------------------\n");

        // Pergunta se deseja continuar
        printf("\nDeseja calcular a tabuada de outro numero? (S/N): ");
        scanf(" %c", &resposta); 
        
        printf("\n"); // Pula uma linha para organizar o visual caso ele continue

    // O loop continua rodando enquanto a resposta for 'S' ou 's'
    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado. Ate logo!\n");

    return 0;
}