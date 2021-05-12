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
	Calculo para raiz quadrada
*/

#include <stdio.h>

double modulo(double a)
{
  return (a >= 0) ? a : -a;
}
/*
	Calcula a raiz quadrada de um valor, com uma determinada
	precisao. Retorna esse valor, ou -1 quando:
	
	* a < 0
	* epsilon <= 0
	* epsilon >= 1
	
	Parametro:
		a - valor cuja raiz quadrada sera calculada
		epsilon - precisao do calculo
*/
double raizQuadrada(double a, double epsilon)
{
  if (a < 0 || epsilon < 0 || epsilon > 1)
    return -1;
  double resposta = a / 2;
  double x = a / 2;
  double diferenca = 100;

  do
  {
    resposta = 0.5 * (x + (a / x));
    diferenca = modulo(resposta - x);
    x = resposta;
  } while (diferenca > epsilon);

  return resposta;
}

/*
	Apenas para seus testes. ISSO SERA IGNORADO NA CORRECAO
*/
int main()
{
  double valor;
  double precisao;
  printf("Qual o valor para calcular a raiz quadrada?");
  scanf("%lf", &valor);

  printf("Qual a precisao da raiz quadrada?");
  scanf("%lf", &precisao);

  printf("Raiz aproximada de %f = %.50f\n", valor, raizQuadrada(valor, precisao));

  return 0;
}