#include <stdio.h>

int main (){
  
  float temperatura, umidade;
  unsigned int estoque, estoqueMinimo = 1000;

  printf("Entre com a temperatura:\n ");
  scanf("%f", &temperatura);
  printf("Entre com a umidade:\n ");
  scanf("%f", &umidade);
  printf("Entre com o estoque:\n");
  scanf("%u", &estoque);

  if (temperatura > 30){
    printf("Temperatura alta\n\n");
  }
  else {
    printf("Temperatura dentro dos parametros\n\n");
  }
  if(umidade > 50){
    printf("Umidade Elevada\n\n");
  }
  else {
    printf("Umidade está dentro dos parametros\n\n");
  }
  if(estoque < estoqueMinimo){
    printf("Estoque abaixo do minimo\n\n");
  }
  else {
    printf("Estoque dentro dos parametros\n\n");
  }

  return 0;
  
}
