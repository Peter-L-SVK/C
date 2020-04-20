#include <stdio.h>

double power(double n, int p);

int main(void)
{
  double x, xpow;
  int exp;

  printf("Enter a number and integer power");
  printf("to which n-the number will be rised\n");
  printf("Enter q to quit\n");
  while(scanf("%lf %d", &x, &exp) == 2)
    {
      xpow = power(x,exp);
      printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
      printf("Enter next pair of numbers or q to quit.\n");
    }

  return 0;
}

double power(double n, int p)
{
  double pow = 1;
  int i;

  if (p == 0)
    {
      if (n == 0)
	printf("0 on 0 is undefined, using 1 as the value.\n");
      pow = 1.0;
    }

  else if (p > 0)
    {
      for (i = 1; i <= p; i++)
	pow *= n;
    }

  else
    {
      pow = 1.0 / power(n,-p);
    }

  return pow;
}
