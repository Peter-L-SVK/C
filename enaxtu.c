#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, k;
  int x;
  double y;

  printf("*******************************************************************\n");
  printf("Program pocita hodnotu fcie y=e^x v intervale 'a' az 'b' v kroku k.\n");
  printf("*******************************************************************\n");
  printf("\n");
  
  printf("Zadaj hodnotu 'a' celociselne: ");
  scanf("%d", &a);
  printf("Zadaj hodnotu 'b' celociselne: ");
  scanf("%d", &b);
  printf("Zadaj velkost kroku 'k' celociselne: ");
  scanf("%d", &k);
  printf("\n");

  x = a;

  do {
    y = exp(x);
    printf("nx = %2d => f(x) = %g\n", x, y);
    x = x + k;
  } while(x <= b);

  printf("*******************************************************************\n");
  return 0;
}
