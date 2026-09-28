#include  <stdio.h>

/* 

1. Sistema de classificação de triângulos
  - Leia três valores inteiros representando os lados de
  um triângulo.O programa deve:
  Verificar se os valores podem formar um triângulo;
  - Caso possam, determinar se ele é equilátero,
  isósceles ou escaleno;
  Determinar se é acutângulo, retângulo ou
  obtusângulo;
  - Informar caso os valores não formem um
  triângulo.
  - Restrição: não utilizar funções prontas para
  classificação.

*/


int main() {
  int a, b, c, a2, b2, c2;
  
  // Solicitar o envio dos números
  printf("Digite tres numeros:\n");
  scanf("%d %d %d", &a, &b, &c);

  a2 = a * a; 
  b2 = b * b; 
  c2 = c * c;

  // Verifica se forma um triângulo
  if (a < b + c && b < a + c && c < a + b) {
      
    // CLASSIFICAÇÃO DOS LADOS
    if (a == b && b == c) { 
      printf("Equilatero e ");
    } else if (a != b && b != c && a != c) {
      printf("Escaleno e ");
    } else {
      printf("Isosceles e ");
    }
    
    // CLASSIFICAÇÃO DOS ÂNGULOS
    if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2) {
      printf("Retangulo\n");
    } else if (a2 > b2 + c2 || b2 > a2 + c2 || c2 > a2 + b2) {
      printf("Obtusangulo\n");
    } else {
      printf("Acutangulo\n");
    }
    
  } else {
    printf("Os numeros nao formam um triangulo\n");
  }

  return 0;
}
