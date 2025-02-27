#include <stdio.h>



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

  printf("Numero do computador é: %d\n", numeroComputador);


  switch (tipoComparacao)
  {
  case 'M':
  case 'm':
    resultado = numeorJogador numeroComputador
    break;

    case 'N':
    case 'n':
    /* code */
    break;
  
    case 'I':
    case 'i':
    /* code */
    break;
  
  default:
  printf("Opção de jogo invalida\n");
    break;
  }
 
  

}
  