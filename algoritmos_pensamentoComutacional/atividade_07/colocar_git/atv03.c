/*
3 - Uma loja quer saber a nota média do atendimento dos clientes.
Enunciado:
Um sistema deve ler a nota de atendimento (de 0 a
10) de 10 clientes e calcular a média geral. Se a
média for menor que 7, deve exibir uma
mensagem de alerta.
*/ 


#include <stdio.h>  

int main() {
    int nota;
    float media; 
    int somaNotas = 0; 

    // Loop para LER e SOMAR notas
    for (int i = 1; i <= 10; i++) {
        printf("Cliente %d - Digite a nota de atendimento (0 a 10): ", i); 
        scanf("%d", &nota); 

        // Validação entre 0 e 10
        if (nota >= 0 && nota <= 10) {
            somaNotas += nota;
        } 
        else {
            printf("Valor invalido! Digite um valor entre 0 e 10.\n");
            i--; // Faz o loop voltar um passo para o usuário não perder a vez
        } 
    }
    
    // Cálculo e verificação da média FORA do loop!
    media = somaNotas / 10.0; 
    
    printf("\nA media geral de atendimento foi: %.1f\n", media);
    
    if (media < 7.0) {
        printf("ALERTA: A media de satisfacao dos clientes esta menor que 7!\n");
    }

    return 0;
}