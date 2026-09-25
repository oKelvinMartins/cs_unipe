#include <stdio.h> 

/* d) Elabore um algoritmo que receba dois números e apresente o resultado da subtração entre
eles.*/

int main() {
    int num1, num2, subtracao; 
    printf("Digite dois numeros inteiros: "); 
    scanf("%d %d", &num1, &num2); 
    subtracao = num1 - num2;
    printf("Subtracao: %d\n", subtracao);
    return 0;
}

