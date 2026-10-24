/* 
4 - Um aplicativo quer acompanhar a meta diária de passos de um usuário. Faça um programa que
leia a quantidade de passos dados por um usuário a cada hora. O programa deve parar quando o
total atingir ou ultrapassar 10.000 passos e então informar quantas horas foram necessárias.
*/ 

#include <stdio.h> 

int main() {
    int passos; 
    int totalPassos = 0;
    int horas = 0; 
    
    printf("--- META DIARIA: 10.000 PASSOS ---\n\n");

    // O loop roda ENQUANTO o total acumulado for menor que 10.000
    while (totalPassos < 10000) {
        // Incrementa a hora no início do loop
        horas++; 
        
        // Pedir os passos dados nesta hora específica
        printf("Digite a quantidade de passos dados na %d a. hora: ", horas);
        scanf("%d", &passos);
        
        // Somar os passos digitados ao total acumulado
        totalPassos += passos; 
    }
    
    // 4. Se o programa saiu do loop, significa que atingiu ou passou de 10.000
    printf("PARABENS! Voce atingiu a meta com um total de %d passos!\n", totalPassos);
    printf("Tempo necessario: %d horas.\n", horas);

    return 0;
}
