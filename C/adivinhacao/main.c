#include <stdio.h>
#include <windows.h>

int main() {
  // Define a página de código do console para UTF-8
  SetConsoleOutputCP(CP_UTF8);

  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

  int numerosecreto;
  numerosecreto = 42;

  int chute;

  for (int i = 1; i <= 3; i++) {
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
  
    int acertou = chute == numerosecreto;
    
    if (acertou) {
      printf("Parabéns! Você acertou!\n");
      break;
    } else {
      int maior = chute > numerosecreto;
  
      if (maior) {
        printf("Seu chute foi maior que o número secreto!\n");
      } else {
        printf("Seu chute foi menor que o número secreto!\n");
      }
    }

    printf("\n\n%d\n\n", i);
  }

  printf("Obrigado por jogar!");

  return 0;
}