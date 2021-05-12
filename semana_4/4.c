#include <stdio.h>

double areaTrapezio(double baseMaior, double baseMenor, double altura)
{
  return (baseMaior + baseMenor) * altura / 2;
}

double areaRetangulo(double base, double altura)
{
  double area = areaTrapezio(base, base, altura);
  printf("Area do retangulo: %f\n", area);
  return area;
}

double areaDoQuadrado(double lado)
{
  return areaRetangulo(lado, lado);
}

int main()
{
  double retangulo = areaRetangulo(11, 27);
  printf(" %f \n", retangulo);
}