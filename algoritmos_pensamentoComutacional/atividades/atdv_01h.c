# include <stdio.h> 

/* h) Construa um algoritmo que receba a quantidade de horas trabalhadas por um funcionário e o
valor da hora trabalhada, calculando o salário total.*/

int main () {
    float hora_trabalha, valor_hora, salario_total; 
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &hora_trabalha);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    salario_total = hora_trabalha * valor_hora;
    printf("Salario total: %.2f\n", salario_total);
    return 0;
}