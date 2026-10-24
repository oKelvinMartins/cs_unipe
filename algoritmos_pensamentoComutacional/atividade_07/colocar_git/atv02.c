/*

2 - Um jovem quer juntar dinheiro e acompanhar o saldo do seu cofrinho. Faça um programa que
simule um cofrinho digital. O usuário pode adicionar moedas de R$0,50, R$1,00 ou R$2,00
quantas vezes quiser. Quando decidir parar, o programa deve mostrar o total acumulado. 

*/


#include <stdio.h> 

int main() {
    float deposito;
    float saldo = 0.0;
    
    printf("===== COFRINHO DIGITAL =====\n");
    printf("Moedas permitidas: 0.50, 1.00 ou 2.00\n");
    printf("Digite 0 quando quiser parar.\n\n");

    // Loop que roda para sempre até o usuário digitar 0
    while (1) {
        printf("Digite o valor da moeda (ou 0 para sair): "); 
        scanf("%f", &deposito); 
        
        // Regra de parada
        if (deposito == 0) {
            break; // O break interrompe o loop e vai para o final do programa
        }
        
        // Verifica se a moeda é válida
        if (deposito == 0.50 || deposito == 1.00 || deposito == 2.00) {
            saldo += deposito; // Adiciona o valor ao saldo total
            printf("Moeda guardada!\n");
        } else {
            // Caso ele digite um valor não permitido
            printf("Moeda invalida! O cofrinho nao aceita esse valor.\n");
        }
    }
    
    // Imprime o total acumulado fora do loop
    printf("\nVocê finalizou. O total acumulado no cofrinho e: R$ %.2f\n", saldo);
    
    return 0;
}