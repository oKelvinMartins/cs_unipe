/*

7. Faça um programa que solicite um número inteiro entre 0 e 10. Caso o usuário informe um
valor fora desse intervalo, o programa deve solicitar novamente a entrada até que um valor válido
seja informado. Depois, calcule e apresente o fatorial do número.
Exemplo:
Entrada: 5 Saída: 5! = 120

*/

#include <stdio.h>

int main() {
    int numero; 
    int fatorial = 1; 

    // 1. LOOP DE VALIDAÇÃO
    do {
        printf("Digite um numero inteiro entre 0 e 10: ");
        scanf("%d", &numero);
        
        // Mensagem de aviso se digitar errado
        if (numero < 0 || numero > 10) {
            printf("Valor invalido! Tente novamente.\n\n");
        }
        
    } while (numero < 0 || numero > 10); // Repete ENQUANTO for inválido

    // 2. CÁLCULO DO FATORIAL
    // Se o número for 0, o loop for não roda, e o fatorial continua valendo 1 (regra matemática: 0! = 1)
    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i; // Multiplica o valor atual pelo próximo número
    }
    
    // 3. EXIBIR DO RESULTADO
    printf("%d! = %d\n", numero, fatorial);

    return 0;
}