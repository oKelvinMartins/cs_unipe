#include <stdio.h> 


/* 

4. Faça um programa que apresente o seguinte menu:
===== MENU =====
1 - Verificar número par ou ímpar
2 - Verificar se é positivo ou negativo
3 - Calcular o quadrado do número
4 – Sair
 O usuário deverá escolher uma opção e, quando
necessário, informar um número. Utilize switch para
controlar o menu.
 O programa deve tratar também opções inválidas.
 Restrições: na opção 1, além de informar se o
número é par ou ímpar, informe também se ele é
positivo, negativo ou zero.

*/


int main() {
    int op; 

    // Exibição do Menu
    printf("Digite o numero do menu escolhido\n");
    printf("===== MENU =====\n");
    printf("1 - Verificar numero par ou impar\n");
    printf("2 - Verificar se e positivo ou negativo\n");
    printf("3 - Calcular o quadrado do numero\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &op); 

    // Controle do menu usando switch
    switch (op) {
        
        case 1: {
            int num; 
            printf("Digite um numero inteiro: "); 
            scanf("%d", &num); 
            
            // 1ª Verificar se é par ou ímpar
            if (num % 2 == 0) {
                printf("O numero %d e par.\n", num);
            } else {
                printf("O numero %d e impar.\n", num);
            }
            
            // 2ª Informar se é positivo, negativo ou zero
            if (num > 0) {
                printf("Alem disso, ele e positivo.\n");
            } else if (num < 0) {
                printf("Alem disso, ele e negativo.\n");
            } else {
                printf("Alem disso, ele e zero.\n");
            }
            
            break; 
        }
        
        case 2: {
            int num;
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
            
            // Lógica para positivo, negativo ou zero
            if (num > 0) {
                printf("O numero %d e positivo.\n", num);
            } else if (num < 0) {
                printf("O numero %d e negativo.\n", num);
            } else {
                printf("O numero e zero.\n");
            }
            break;
        }
        
        case 3: {
            int num, quadrado;
            printf("Digite um numero inteiro: ");
            scanf("%d", &num);
            
            quadrado = num * num;
            printf("O quadrado de %d e %d.\n", num, quadrado);
            
            break;
        }
        
        case 4:
            printf("Saindo do programa...\n");
            break;
            
        default:
            // Tratamento de opção inválida
            printf("Opcao invalida! Por favor, escolha um numero de 1 a 4.\n");
            break;
    }
    
    return 0;
}