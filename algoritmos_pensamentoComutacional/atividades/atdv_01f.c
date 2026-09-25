#include <stdio.h> 

/* f) Construa um algoritmo que receba a altura e o peso de uma pessoa e calcule o Índice de
Massa Corporal (IMC */


int main() { 
    float altura, peso, imc; 
    printf("Digite sua altura (em metros): "); 
    scanf("%f", &altura); 
    printf("Digite seu peso (em kg): "); 
    scanf("%f", &peso); 

    imc = peso / (altura * altura); 
    printf("Seu IMC e: %.2f\n", imc);
    return 0;
}