#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float a, b, c, d;
  float x, x1, x2, xd, xr, xi;

  printf("\n**********************************\n");
  printf("Program riesi kvadratcike rovnice.\n");
  printf("**********************************\n");
  printf("Zadaj clena a: ");
  scanf("%g", &a);
  printf("Zadaj clena b: ");
  scanf("%g", &b);
  printf("Zadaj clena c: ");
  scanf("%g", &c);
  printf("\nJe nacitana rovnica: %gx^2 + (%gx) + (%g) = 0\n", a, b, c);
  printf("\n");

  if (a == 0)
    {
      if (b == 0)
	{
	  if (c == 0)
	    {
	      printf("Rovnica ma nekonecne vela rieseni.\n");
	      printf("**********************************\n");
	      return 0;
	    }
	  printf("Rovnica nema riesenie!\n");
	  printf("*************************************************\n");
	  return 0;
	}
      x = (-1*c) / b;
      printf("Rovnica je linearna a ma jedno riesenie x = %g. \n", x);
      printf("******************************************************\n");
      return 0;
    }
  
  d = pow(b,2) - 4*a*c;

  if (d > 0)
    {
      x1 = (-1*b + sqrt(d)) / (2*a);
      x2 = (-1*b - sqrt(d)) / (2*a);
      printf("Riesenim kvadratickej rovnice su korene x1 = %g a x2 = %g. \n", x1, x2);
      printf("**********************************************************************\n");
    }

  else if (d == 0)
    {
      xd = (-1*b) / (2*a);
      if (xd == -0)
	xd = 0;
      printf("Riesenie je koren x1,2 = %g , tzv. dvojnasobny koren.\n", xd);
      printf("**********************************************************************\n");
    }

  else
    {
      d = (-1*d);
      xr = b / (2*a);
      xi = sqrt(d) / (2*a);
      printf("Korene rovnice lezia v obore C (komplexnych cisel), xr = %g a xi = %g.\n", xr, xi);
      printf("******************************************************************************\n");
    }

  return 0;
  }

