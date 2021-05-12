#include <stdio.h>

void retangulo(int largura, int altura)
{
  for (int i = 0; i < altura; i++)
  {
    for (int j = 0; j < largura; j++)
      printf("#");
    printf("\n");
  }
}

int main()
{
  int largura, altura;
  printf("Qual a largura do retangulo \n");
  scanf("%d", &largura);
  printf("Qual a altura do retangulo \n");
  scanf("%d", &altura);
  retangulo(largura, altura);
  return 0;
}