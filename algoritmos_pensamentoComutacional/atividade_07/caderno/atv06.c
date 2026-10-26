/*

6. Escreva um programa que leia um número inteiro positivo e determine se ele é primo.
O programa deve verificar todos os possíveis divisores do número e informar o resultado.
Depois, modifique o programa para permitir que o usuário teste vários números, encerrando a
execução quando ele escolher não continuar. 

*/ 

#include <stdio.h> 

int main() {
    int numero;
    char resposta;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &numero);

        // Números menores ou iguais a 1 não são primos por regra matemática
        if (numero <= 1) {
            printf("O numero %d NAO e primo.\n", numero);
        } 
        else {
            // zerar o contador toda vez que testar um novo número
            int quantidadeDivisores = 0; 
            
            // verificar todos os possíveis divisores (de 1 até o próprio número)
            for (int i = 1; i <= numero; i++) {
                if (numero % i == 0) {
                    quantidadeDivisores++; // Encontrou um divisor, conta +1
                }
            }

            // Verificação final
            if (quantidadeDivisores == 2) {
                printf("O numero %d e PRIMO!\n", numero);
            } else {
                printf("O numero %d NAO e primo (ele possui %d divisores).\n", numero, quantidadeDivisores);
            }
        }

        // Pergunta se o usuário deseja testar outro número
        printf("\nDeseja testar outro numero? (S/N): ");
        scanf(" %c", &resposta); 
        printf("\n");

    } while (resposta == 'S' || resposta == 's');

    printf("Programa encerrado.\n");

    return 0;
}