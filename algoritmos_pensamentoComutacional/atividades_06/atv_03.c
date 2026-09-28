#include <stdio.h> 


/* 

3. Leia três números inteiros A, B e C.
 Sem ordenar os valores e sem utilizar funções
auxiliares, o programa deve informar:
 Maior valor;
 Menor valor;
 Valor intermediário;
 Se existem valores repetidos;
 Se os três valores são iguais;
 Se estão em ordem crescente;
 Se estão em ordem decrescente.
 Restrição: resolver utilizando apenas comparações
condicionais.

*/


int main () { 
    int a, b, c; 
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    // Verificar o maior numero
    if (a > b && a > c) {
        printf("O maior numero e: %d\n", a);
    } else if (b > a && b > c) {
        printf("O maior numero e: %d\n", b);
    } else {
        printf("O maior numero e: %d\n", c);
    } 
    // Verificar o menor numero
    if (a < b && a < c) {
        printf("O menor numero e: %d\n", a);
    } else if (b < a && b < c) {
        printf("O menor numero e: %d\n", b);
    } else {
        printf("O menor numero e: %d\n", c);
    }
    // Verificar o numero do meio
    if ((a > b && a < c) || (a < b && a > c)) {
        printf("O numero do meio e: %d\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("O numero do meio e: %d\n", b);
    } else {
        printf("O numero do meio e: %d\n", c);
    } 
    // Verificar se existem valores repetidos
    if (a == b && a == c) {
        printf("Os tres numeros sao iguais.\n");
    } else if (a == b || a == c || b == c) {
        printf("Dois numeros sao iguais.\n");
    } else {
        printf("Todos os numeros sao diferentes.\n");
    }
    // verificar se estão em ordem crescente ou decrescente
    if (a < b && b < c) {
        printf("Os numeros estao em ordem crescente.\n");
    } else if (a > b && b > c) {
        printf("Os numeros estao em ordem decrescente.\n");
    } else {
        printf("Os numeros nao estao em ordem crescente nem decrescente.\n");
    } 
}