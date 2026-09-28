#include <stdio.h> 

/* 

2. Um caixa possui notas de:
 R$ 200, R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5O
usuário informa o valor do saque.
 O programa deve verificar:
 Se o valor é válido;
 Se é possível realizar o saque;
 Quais notas devem ser entregues;
 A quantidade de cada nota;
 A quantidade total de cédulas.
 Porém, existe uma regra adicional:
 O caixa deve preservar pelo menos uma nota de
cada denominação disponível.
 O programa deve decidir se consegue realizar o
saque sem violar essa regra.

*/  

int main() { 
    int saque; 
    
    // Definir o estoque inicial do caixa 
    int est200 = 10, est100 = 10, est50 = 10, est20 = 10, est10 = 10, est5 = 10;
    
    // Variáveis para guardar quantidade de notas 
    int qtd200 = 0, qtd100 = 0, qtd50 = 0, qtd20 = 0, qtd10 = 0, qtd5 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    // Validar valor de saque 
    if (saque <= 0 || saque % 5 != 0) {
        printf("Valor invalido. O saque deve ser maior que 0 e em notas disponiveis (multiplos de 5).\n"); 
    } 
    else {
        // Lógica para notas de 200
        if (saque >= 200) {
            // Calcular quantas notas de 200 são necessárias e o limite permitido
            int notasNecessarias = saque / 200; 
            int limitePermitido = est200 - 1; 
            
            if (notasNecessarias <= limitePermitido) {
                qtd200 = notasNecessarias;      
            } else {
                qtd200 = limitePermitido;       
            }
            saque = saque - (qtd200 * 200); 
        }

        // Lógica para notas de 100
        if (saque >= 100) {
            // Calcular quantas notas de 100 são necessárias e o limite permitido
            int notasNecessarias = saque / 100;
            int limitePermitido = est100 - 1; 
            
            if (notasNecessarias <= limitePermitido) {
                qtd100 = notasNecessarias;    
            } else {
                qtd100 = limitePermitido;
            } 
            saque = saque - (qtd100 * 100);   
        }

        // Lógica para notas de 50
        if (saque >= 50) {
            // Calcular quantas notas de 50 são necessárias e o limite permitido
            int notasNecessarias = saque / 50;
            int limitePermitido = est50 - 1;  
            
            if (notasNecessarias <= limitePermitido) {
                qtd50 = notasNecessarias;     
            } else {
                qtd50 = limitePermitido;
            } 
            saque = saque - (qtd50 * 50);     
        }

        // Lógica para notas de 20  
        if (saque >= 20) {
            // Calcular quantas notas de 20 são necessárias e o limite permitido
            int notasNecessarias = saque / 20;
            int limitePermitido = est20 - 1;  
            
            if (notasNecessarias <= limitePermitido) {
                qtd20 = notasNecessarias;     
            } else {
                qtd20 = limitePermitido;      
            } 
            saque = saque - (qtd20 * 20);     
        }

        // Lógica para notas de 10
        if (saque >= 10) {
            // Calcular quantas notas de 10 são necessárias e o limite permitido
            int notasNecessarias = saque / 10;
            int limitePermitido = est10 - 1;  
            
            if (notasNecessarias <= limitePermitido) {
                qtd10 = notasNecessarias;     
            } else {
                qtd10 = limitePermitido;
            } 
            saque = saque - (qtd10 * 10);     
        }

        // Lógica para notas de 5
        if (saque >= 5) {
            // Calcular quantas notas de 5 são necessárias e o limite permitido
            int notasNecessarias = saque / 5;
            int limitePermitido = est5 - 1;   
            
            if (notasNecessarias <= limitePermitido) {
                qtd5 = notasNecessarias;      
            } else {
                qtd5 = limitePermitido;
            } 
            saque = saque - (qtd5 * 5);       
        }

        // FINALIZAÇÃO: 
        if (saque == 0) {
            int totalCedulas = qtd200 + qtd100 + qtd50 + qtd20 + qtd10 + qtd5;
            
            printf("\nSaque realizado com sucesso!\n");
            printf("Notas entregues:\n");
            
            // Só imprime a nota se a quantidade for maior que zero
            if (qtd200 > 0) printf("- %d nota(s) de R$ 200\n", qtd200);
            if (qtd100 > 0) printf("- %d nota(s) de R$ 100\n", qtd100);
            if (qtd50 > 0)  printf("- %d nota(s) de R$ 50\n", qtd50);
            if (qtd20 > 0)  printf("- %d nota(s) de R$ 20\n", qtd20);
            if (qtd10 > 0)  printf("- %d nota(s) de R$ 10\n", qtd10);
            if (qtd5 > 0)   printf("- %d nota(s) de R$ 5\n", qtd5);
            
            printf("Quantidade total de cedulas: %d\n", totalCedulas);

        } else {
            // Se o saque não zerou, é porque o caixa não tinha notas suficientes
            printf("Nao e possivel realizar o saque mantendo a regra do caixa.\n");
        }
    }
    
    return 0;
}