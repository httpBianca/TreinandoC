#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int opcao;
  int numerosecreto, palpite, regras;

  printf("Bem vindo ao menu do jogo!\n");
  printf(" 1. Iniciar Jogo\n");
  printf(" 2. Ver regras\n");
  printf(" 3. Sair");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao){
    case 1:
      printf("Iniciando Jogo....\n\n");

      //Gerando um número aleatório
      srand(time(0));
      numerosecreto = rand() % 10;

      //Entrada do palpite do Usuário
      printf("Escolha um número de 0 á 9: ");
      scanf("%d", &palpite);

      //Caso a pessoa acerte ou erre o palpite, usando o laço de decisão if-else
      if(numerosecreto == palpite){
        printf("Você acertou, Parabéns!");
      }
      else{
        printf("Você errou, tente novamente!");
      } 
      
    break;
    
    case 2:
      printf("Regras do Jogo: \n");
      printf("Qual regra você quer ver? \n");
      printf("Digite 1 para a primeira regra, e 2 para a segunda: ");
      scanf("%d", &regras);

      switch (regras){
        case 1:
          printf("Regra 1 - Não esqueça de escolher um número dentre o informado");
        break;
        
        case 2:
          printf("Regra 2 - Se divirta, e Compartilhe com seus amigos!");
        break;
      }
    //Fim da Case - Regras
    break; 
    
    case 3:
      printf("Saindo....\n");
    break;

    default:
      printf("Opção invalida, tente novamente!");
    break;
  }

  return 0;  
}
