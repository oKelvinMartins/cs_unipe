

#include <stdio.h> 

/* a) Elabore um algoritmo que receba dois números, calcule a multiplicação entre eles e
apresente o resultado. */

int main () {
    int n1, n2; 
    scanf("%d %d", &n1, &n2); 

    int multiplicacao = n1 * n2; 
    printf("Multiplicacao: %d\n", multiplicacao);
    return 0;
}