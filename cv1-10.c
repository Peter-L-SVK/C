#include <stdio.h>

int main()
{
  int z;
  while ((z = getchar()) != EOF)
    {
      if (z == '\t')
	{
	  putchar('\\');
	  putchar('t');
	}

      else if (z == '\b')
	{
	  putchar('\\');
	  putchar('b');
	}

      else if (z == '\\')
	{
	  putchar('\\');
	  putchar('\\');
	}

      else
	putchar(z);
    }
  return 0;
}
