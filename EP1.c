/*********************************************************************/
/**   ACH2001 - Introducao a Programacao                            **/
/**   EACH-USP - Primeiro Semestre de 2021                          **/
/**   194 - Luciano Antonio Digiampietri                            **/
/**                                                                 **/
/**   Primeiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   Vinicius Henrique Crispim Rosa          9395067               **/
/**                                                                 **/
/*********************************************************************/

/*
	Caixa eletronico das Ilhas Weblands, com estoque ilimitado de cedulas
	de B$50,00, B$20,00, B$5,00 e B$1,00.
*/

#include <stdio.h>

/* Numero de cedulas de B$50,00 */
int n50;

/* Numero de cedulas de B$20,00 */
int n20;

/* Numero de cedulas de B$5,00 */
int n5;

/* Numero de cedulas de B$1,00 */
int n1;

/*
	Determina a quantidade de cada nota necessaria para totalizar
	um determinado valor de retirada, de modo a minimizar a quantidade
	de cedulas entregues.
	
	Abastece as variaveis globais n50, n20, n5 e n1 com seu respectivo
	numero de cedulas.
	
	Parametro:
		valor - O valor a ser retirado
*/
void fazRetirada(int valor)
{
  /* 
    Caso o valor passado é negativo todas 
    as notas ficam com -1 e a função termina
  */
  if (valor < 0)
  {
    n50 = -1;
    n20 = -1;
    n5 = -1;
    n1 = -1;
    return;
  }

  /* Variável auxiliar de valor */
  int valor_aux = valor;

  /*
    Nesse bloco de código a idéia é simples
    a variável de notas recebe o resultado da divisão por inteiro
    do valor_aux pelo valor da nota, em seguida, o valor_aux é diminuido
    do valor da nota vezes a quantidade dela.
    Fazendo isso da nota maior para a menor se da a quantidade de cada nota.
  */
  n50 = valor_aux / 50;
  valor_aux -= n50 * 50;

  n20 = valor_aux / 20;
  valor_aux -= n20 * 20;

  n5 = valor_aux / 5;
  valor_aux -= n5 * 5;

  n1 = valor_aux;
  valor_aux -= n1;

  /* 
    Caso de verificação
    Se valor_aux for diferente de valor algo deu errado
    Um possível mudança seria mudar o tipo de retorno da função
    para int e retornar -1 em caso de erro e 0 em caso de sucesso
  */
  valor_aux = n50 * 50 + n20 * 20 + n5 * 5 + n1;
  if (valor_aux != valor)
    return;
}

/*
	Funcao main apenas para seus testes. ISSO SERA IGNORADO NA CORRECAO
*/
int main()
{
  /* escreva seu codigo (para testes) aqui */

  int valor = 0;
  /* Exemplos de testes: */
  while (valor != -1)
  {
    printf("Digite o valor a ser executado ou -1 para sair\n");
    scanf("%i", &valor);
    fazRetirada(valor);
    printf("Valor: %i\n", valor);
    printf("Notas de 50: %i\n", n50);
    printf("Notas de 20: %i\n", n20);
    printf("Notas de 5:  %i\n", n5);
    printf("Notas de 1:  %i\n", n1);
  }
  return 0;
}