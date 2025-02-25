#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "guess2.h"

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

void update_attempts(int answer, int pokusy[], int *pozicia, int *pocet_pokusov, const char *message) {
    pokusy[*pozicia] = answer;
    if (*pozicia > 0 && (answer == pokusy[*pozicia - 1] || (*pozicia > 1 && answer == pokusy[*pozicia - 2]))) {
        printf("Toto cislo si uz skusal!\n");
    }
    (*pozicia)++;
    (*pocet_pokusov)--;
    if (*pocet_pokusov == 0) {
        printf("Nevadi, skusis nabuduce.\n");
        clspause();
        exit(0);
    }
    printf("%s\n", message);
    printf("Hadaj cislo od 0 po 9 (pocet pokusov: %d): ", *pocet_pokusov);
}
