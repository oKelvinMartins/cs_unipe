#include <stdio.h> 

/* b) Desenvolva um algoritmo que receba cinco números, calcule a média aritmética e apresente
o resultado final. */

int main() {
    int num1, num2, num3, num4, num5, media;
    
    printf("Digite cinco numeros inteiros: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("Media: %d\n", media);

    return 0;
}