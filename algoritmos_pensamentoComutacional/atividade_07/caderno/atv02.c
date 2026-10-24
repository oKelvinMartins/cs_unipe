/*
2. Faça um programa que leia as notas de vários alunos. A leitura deve continuar enquanto o
usuário desejar. Para cada aluno, leia 3 notas, calcule a média e informe:
Aprovado, se a média for maior ou igual a 7;
Recuperação, se a média estiver entre 5 e 6,9;
Reprovado, se a média for menor que 5.
Ao final, informe quantos alunos foram aprovados, quantos ficaram de recuperação e
quantos foram reprovados.
*/ 


#include <stdio.h>  

int main () {
    float nota, media, soma;
    int aprovado = 0, reprovado = 0, recuperacao = 0;
    
    // Variável para controlar o loop (1 = continua, 0 = para)
    int continuar = 1; 

    // O loop continua enquanto o usuário digitar 1
    while (continuar == 1) {
        
        // Zera a soma para o novo aluno não herdar as notas do aluno anterior
        soma = 0; 

        // 1. Loop apenas para ler as 3 notas e somar
        for(int i = 1; i <= 3; i++) {
            printf("Digite a nota %d: ", i);
            scanf("%f", &nota); // Corrigido para %f
            
            soma += nota; // Vai somando as notas
        }
        
        // 2. Calcula a média usando a soma das 3 notas
        media = soma / 3.0;
        printf("Media do aluno: %.2f - ", media);
        
        // 3. Verifica a situação do aluno
        if (media >= 7.0) {
            aprovado++;
            printf("Aprovado\n");
        } 
        else if (media < 5.0) { 
            reprovado++;
            printf("Reprovado\n");
        } 
        else {
            recuperacao++; 
            printf("Recuperacao\n");
        }
        
        // 4. Pergunta se deseja registrar as notas de outro aluno
        printf("\nDeseja registrar outro aluno? (1 - Sim / 0 - Nao): ");
        scanf("%d", &continuar);
        printf("\n"); 
    }
    
    // FINAL: Fora do while, imprime os totais
    printf("=== RESULTADO FINAL ===\n");
    printf("Total de Aprovados: %d\n", aprovado);
    printf("Total em Recuperacao: %d\n", recuperacao);
    printf("Total de Reprovados: %d\n", reprovado);

    return 0;
}