#include <stdio.h>
#include <math.h>

int main(){

  float a, b, c, delta;
  double x1, x2;

  printf("Digite o valor de A: ");
  scanf("%f", &a);
  printf("Digite o valor de B: ");
  scanf("%f", &b);
  printf("Digite o valor de C: ");
  scanf("%f", &c);

  delta = pow(b, 2) - 4*a*c;

  if(delta < 0){
    printf("Não há raiz de %.2f no conjunto dos reais", delta);
  }else{
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b - sqrt(delta))/2*a;

    printf("O valor de delta é %.2f\n", delta);
    printf("x1 é %.2f e x2 é %.2f", x1, x2);
  }

  return 0;
}