#include <stdio.h>
#include <string.h>

int main() {
  // Declaração de variáveis

  // Variáveis Char tipo Array pois o nome do produto pode ter      mais de um
  // caracter
  char produtoA[30] = "Produto A";
  char produtoB[30] = "Produto B";

  // Variáveis tipo unsigned int pois o estoque não pode ser negativo
  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 1000;

  // Variáveis tipo float pois o valor dos produtos pode ter casas decimais
  float valorA = 10.50;
  float valorB = 20.40;

  // Variáveis tipo unsigned int pois o estoque mínimo não pode ser negativo
  unsigned int estoqueMinA = 500;
  unsigned int estoqueMinB = 2500;

  // Variáveis tipo double pois o valor total pode ter casas decimais
  double valorTotalA;
  double valorTotalB;

  // Variavel de Resultado
  int resultadoA;
  int resultadoB;

  // Impressão das informações dos produtos
  printf("Produto %s, tem estoque de %d e o valor unitario é de %.2f\n\n",produtoA, estoqueA, valorA);
  printf("Produto %s, tem estoque %d e o valor unitario de %.2f\n\n", produtoB, estoqueB, valorB);

  // Comparação com o valor minimo de estoque
  resultadoA = estoqueA > estoqueMinA;
  resultadoB = estoqueB > estoqueMinB;

  printf("O produto %s tem estoque minimo? %d\n\n", produtoA, resultadoA);
  printf("O Produto %s tem o estoque minimo? %d\n\n", produtoB, resultadoB);

  // Comparação entre os valores totais dos produtos
  printf("\n\n==========================\n\n");
  printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ "
         "%.2f): %d\n\n",
         estoqueA * valorA, estoqueB * valorB,
         (estoqueA * valorA) > (estoqueB * valorB));

  return 0;
}
