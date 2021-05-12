#include <stdio.h>

void conjecturaDeCollatz(int n)
{
  printf("Imprimindo sequencia iniciando em %i\n", n);
  while (n > 1)
  {
    if (n % 2 == 0)
      n = n / 2;
    else
      n = 3 * n + 1;
    printf("%i\n", n);
  }
}

int cor(int identificador)
{
  switch (identificador)
  {
  case 1:
    printf("verde\n");
    break;
  case 2:
    printf("amarelo\n");
    break;
  case 3:
    printf("azul\n");
    break;
  case 4:
    printf("branco\n");
    break;
  default:
    printf("identificador invalido\n");
  }
}

int main()
{

  // NAO ESQUECA DE TROCAR O PARAMETRO PELOS DOIS ULTIMOS DIGITOS DO SEU NUMERO USP MAIS 1
  conjecturaDeCollatz(192);

  return 0;
}