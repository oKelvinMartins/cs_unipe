/*
1. Escreva um algoritmo em C que leia 10 números inteiros. Para cada número, informe se ele é
par ou ímpar. Ao final, apresente a quantidade de números pares e a quantidade de números
ímpares 
*/

#include <stdio.h>  

int main() {
    int numero, calculo;
    int par = 0, impar = 0; 
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero); 
        
        calculo = numero % 2;

        if (calculo == 0) {
            par++;
            printf("O numero e par\n"); 
        }
        else {
            impar++; 
            printf("O numero e impar\n"); 
        }
    }
    
    printf("\n--- RESULTADO FINAL ---\n");
    printf("Quantidade de numeros pares: %d\n", par);
    printf("Quantidade de numeros impares: %d\n", impar);

    return 0; 
}