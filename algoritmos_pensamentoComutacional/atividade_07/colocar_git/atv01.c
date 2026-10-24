
/*

1 - Um condomínio quer monitorar o consumo de água de cada morador. Escreva um programa que
leia o consumo mensal de água (em m³) de 5 moradores. Para cada morador, informe se o
consumo está dentro da média (até 20 m³) ou acima. Ao final, mostre o consumo médio geral.

*/

#include <stdio.h>

int main() {
    int consumo;
    int soma = 0;
    float media; 

    // Loop único para ler os dados, somar e informar o status
    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo de agua do morador%d em m3: ", i);
        scanf("%d", &consumo);

        soma += consumo; 
        // 2. A verificação do consumo foi movida para cá, logo após a leitura
        printf("O consumo do morador %d esta ", i);
        if (consumo <= 20) {
            printf("dentro da media\n\n");
        } else {
            printf("acima da media\n\n");
        }
    }
    
    // 3. Dividir por 5.0 para garantir que os decimais sejam calculados
    media = soma / 5.0; 
    
    printf("A media geral de consumo de agua e: %.2f m3\n", media);

    return 0;
}