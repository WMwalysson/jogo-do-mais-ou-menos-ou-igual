#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
  int numeorJogador, numeroComputador, resultado;
  char tipoComparacao;

  // gerar numero aleatorio
  srand(time(0));
  numeroComputador = rand () % 100 + 1;

  // Exibição do menu
  printf("Bem-vindo ao jogo Mais, Menos ou Igual\n");
  printf("Você deve escolher um numero e  o tipo de comparação\n");
  printf("M maior\n");
  printf("N menor\n");
  printf("I Igual\n");

  printf("Escolha a comparação\n");
  scanf("%c", &tipoComparacao);

  printf("Digite seu numero ( entre 1 e 100):");
  scanf ("%d", &numeorJogador);

  //printf("Numero do computador é: %d\n", numeroComputador);


    switch (tipoComparacao)
  {
    case 'M':
    case 'm':
    printf("Você escolheu a opção maior\n");
    resultado = numeorJogador > numeroComputador ? 1 : 0;
  break;
    case 'N':
    case 'n':
    printf("Você escolheru a opção menor\n");
    resultado = numeorJogador < numeroComputador ? 1 : 0;
  break;
    case 'I':
    case 'i':
    printf(" Você escolheu a opção igual\n");
    resultado = numeorJogador == numeroComputador ? 1 : 0;
  break;
  
  default:
  printf("Opção de jogo invalida\n");
    break;
  }
  printf("Numero do computador é: %d e o jogador é: %d\n", numeroComputador, numeorJogador);

  if (resultado == 1)
  {
    printf("Você venceu\n");
  } else {
    printf("Voce perdeu\n");
  }

}
  