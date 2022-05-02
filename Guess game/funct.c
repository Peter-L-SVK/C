#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "gues2.h"

void clspause()
{
  printf("\n");
  system("read -p \"Press Enter to continue...\"");
  system("clear");
}

int getfirst()
{
  int z;

  z = getchar();
  while (isspace(z))
    z = getchar();
  while (getchar() != '\n')
    continue;
  
  return z;
}

int getnum()
{
  char num;
  int inv_num;

  num = getchar();
  while (isspace(num))
    num = getchar();
  while (getchar() != '\n')
    continue;
  if (isdigit(num))
    {
      inv_num = num - '0';
      if (inv_num == 0)
	inv_num += 10;

      return inv_num;
    }
    
  else
    {
      printf("Zle zadana hodnota!\n");
      clspause();
      exit(1);
    }
}
