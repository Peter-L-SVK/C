#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  int n, m;
  int cyklus;
  int *pole;

  cyklus = 0;
  while (true)
    {
      printf("Zadajte cislo: ");
      scanf("%d", &n);
      if (n <= 0)
	{
	  printf("Chyba!!! Zadajte hodnotu vacsiu ako 0!\n");
	  continue;
	}
      else
	break;
    }
  m = n;
  printf("Zistujem pocet opakovani cyklu.\n");
  while (n > 1)
    {
      if (n < 1)
	break;
      if (n % 2 == 0)
	n /= 2;
      else
	n = 3 * n + 1;
      cyklus++;
    }
  printf("Pocet opakovani cyklu je: %d\n", cyklus);
  printf("Alokujem maticu pre vysledky.\n");
  pole = malloc(cyklus * sizeof(int));
  if (pole == NULL)
  {
    printf("Chyba pamate, matica nebola alokovana!\n");
    exit(1);
  }
  printf("Matica alokovana.\n");
  n = m;
  cyklus = 0;
  printf("Vypocitavam Collatzov algoritmus pre cislo %d\n", n);
  while (n > 1)
    {
      pole[cyklus] = n;
      if (n < 1)
	break;
      if (n % 2 == 0)
	n /= 2;
      else
	n = 3 * n + 1;
      cyklus++;
    }
  printf("Vysledna matica: \n");
  for (m = 0; m < cyklus; m++)
    printf("%d, ", pole[m]);
  printf("\n");
  printf("Koniec.\n");
  free(pole);
    
  return 0;
}
