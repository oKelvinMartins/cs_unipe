#include <stdio.h> 

/* g) Elabore um algoritmo que receba a temperatura em graus Celsius e apresente o valor
convertido para graus Fahrenheit.*/

int main () {
    float temperaturaC, temperaturaF; 
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaC);
    temperaturaF = (temperaturaC * 9 / 5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", temperaturaF);
    return 0;
}