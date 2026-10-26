/*

8. Desenvolva um jogo no qual o programa possua um número secreto entre 1 e 100.
O usuário deverá tentar descobrir o número. A cada tentativa, o programa deverá informar:
"O número secreto é maior", caso o palpite seja menor;
"O número secreto é menor", caso o palpite seja maior;
"Parabéns! Você acertou!", caso o usuário acerte.
Ao final, informe a quantidade de tentativas realizadas. Limitar o jogador a 10 tentativas. Caso não
acerte, informe qual era o número secreto

*/ 

#include <stdio.h> 

int main() {
    int numero;
    int numeroSecreto = 30; // Colocar o numero secreto aqui 
    int acertou = 0; // Uma "bandeira" (flag) para sabermos se ele ganhou

    printf("--- JOGO DA ADIVINHACAO ---\n");
    printf("Tente descobrir o numero secreto entre 1 e 100.\n");
    printf("Voce tem 10 tentativas!\n\n");

    // O loop for controla exatamente as 10 tentativas
    for (int tentativas = 1; tentativas <= 10; tentativas++) {
        
        printf("Tentativa %d de 10. Digite seu palpite: ", tentativas);
        scanf("%d", &numero);

        if (numero == numeroSecreto) {
            printf("\nParabens! Voce acertou em %d tentativa(s)!\n", tentativas);
            acertou = 1; // Marca que o usuário venceu
            break;       // Sai do loop imediatamente
        }
        else if (numero < numeroSecreto) {
            printf("O numero secreto e MAIOR que %d.\n\n", numero); 
        } 
        else {
            printf("O numero secreto e MENOR que %d.\n\n", numero);
        }
    }
    
    // Fora do loop, verifica se ele gastou as 10 tentativas e não acertou
    if (acertou == 0) {
        printf("Que pena, voce esgotou suas 10 tentativas!\n");
        printf("O numero secreto era: %d\n", numeroSecreto);
    }
    
    return 0;
}