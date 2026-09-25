#include <stdio.h> 

/* c) Construa um algoritmo que receba o valor de um produto e calcule o preço final
considerando um acréscimo de 8% de imposto. */ 

int main() {
    float valorProduto, precoFinal;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    precoFinal = valorProduto + (valorProduto * 0.08);

    printf("Preco final com imposto: %.2f\n", precoFinal);

    return 0;
}