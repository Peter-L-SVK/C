#include <stdio.h>

int main()
{
  int z, z_stare;

  while ((z = getchar()) != EOF)
    {
      if (z_stare == ' ' && z != ' ')
	{
	  putchar(' ');
	  putchar(z);
	}

      else if (z != ' ')
	putchar(z);
      z_stare = z;
    }
  return 0;
}
