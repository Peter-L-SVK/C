#include <stdio.h>
#define MAXRADIOK 1000

int nacitariadok(char riadok[], int maxriadok);
void kopiruj(char kam[], char od[]);

int main()
{
  int dlzka;
  int max;
  char riadok[MAXRADIOK];
  char najdlhsi[MAXRADIOK];

  max = 0;
  while ((dlzka = nacitariadok(riadok, MAXRADIOK)) > 0)
    {
      if (dlzka > max)
	{
	  max = dlzka;
	  kopiruj(najdlhsi, riadok);
	}

      if (max > 0)
	{
	  printf("%s", riadok);
	  printf("%d znakov\n", dlzka);
	}
    }
  return 0;
}

int nacitariadok(char r[], int lim)
{
  int i, z;

  for (i = 0; i < lim-1 && (z = getchar()) != EOF && z != '\n'; i++)
    r[i] = z;
  if (z == '\n')
    {
      r[i] = z;
      ++i;
    }
  r[i] = '\0';
  return i;
}

void kopiruj(char kam[], char od[])
{
  int i;

  i = 0;
  while ((kam[i] = od[i]) != '\0')
    ++i;
}
