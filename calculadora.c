#include <stdio.h>
int main(){
    /* declaração de varáveis tipo float pois as notas dos alunos podem ter casas decimais, declaradas todas juntas pois são do mesmo tipo. */
    float nota1, nota2, nota3;
    float media;

    //entrada de dados pelo usuário
    printf("***********    CALCULADORA DE MÉDIA   ***********\n\n");
  
    printf("Entre com a primeira nota do aluno: \n");
    scanf("%f", &nota1); //%f - float
  
    printf("Entre com a segunda nota do aluno: \n");
    scanf("%f", &nota2);
  
    printf("Entre com a terceira nota do aluno: \n");
    scanf("%f", &nota3);

    //calculando a média das notas
    media = (nota1 + nota2 + nota3) / 3;

    /* Outra forma de fazer esse código seria declarando as notas como int, e logo depois usar o casting.
    Exemplo usando o casting:
    
    int nota1, nota2, nota3;
    float media;

    media = (float) (nota1 + nota2 + nota3) /3;
    
    */
  
    printf("A média do aluno é: %.2f", media);

  return 0;
}
