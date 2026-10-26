/*
4. Faça um programa que leia números inteiros continuamente. A entrada deve terminar quando
o usuário digitar 0. Ao final, apresente: 
a soma de todos os números positivos;
a soma de todos os números negativos;
a quantidade de números positivos;
a quantidade de números negativos.
O zero não deve ser considerado positivo nem negativo.

*/


#include <stdio.h> 

int main() {
    int numero;
    
    // Variáveis para os Positivos
    int somaPositivos = 0;
    int qtdPositivos = 0;
    
    // Variáveis para os Negativos
    int somaNegativos = 0;
    int qtdNegativos = 0;

    printf("--- LEITOR DE NUMEROS ---\n");
    printf("Digite 0 para encerrar.\n\n");

    // Loop contínuo
    while (1) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        
        // 1. Condição de parada (O zero não é calculado, ele apenas encerra)
        if (numero == 0) {
            break; 
        }
        
        // 2. Verifica se é positivo
        if (numero > 0) {
            somaPositivos += numero; // Acumula o valor
            qtdPositivos++;          // Conta +1 na quantidade
        } 
        // 3. Verifica se é negativo
        else if (numero < 0) {
            somaNegativos += numero; // Acumula o valor (vai somar negativo com negativo)
            qtdNegativos++;          // Conta +1 na quantidade
        }
    }

    // 4. Exibir dos resultados fora do loop
    printf("\n=== RESULTADOS FINAL ===\n");
    printf("Soma dos numeros positivos: %d\n", somaPositivos);
    printf("Soma dos numeros negativos: %d\n", somaNegativos);
    printf("Quantidade de numeros positivos: %d\n", qtdPositivos);
    printf("Quantidade de numeros negativos: %d\n", qtdNegativos);

    return 0;
}