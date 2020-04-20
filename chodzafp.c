#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ERROR1 {printf("Subor array.txt sa nepodarilo vytvorit!"); return 1;}
#define ERROR2 {printf("Subor array.txt sa nepodarilo uzavriet!"); return 1;}

int main()
{
  FILE *fw;
  
  const int K = 1;
  int i, pos_x, pos_y, dimension;
  int ax_x, ax_y, z;
  unsigned int steps = 0;
  
  if ((fw = fopen("array.txt", "w")) == NULL)
    ERROR1  
      
  srand(time(NULL));
  printf("Zadaj rozmer stvorcoveho sveta: ");
  scanf("%d", &dimension);
  
  int **array;
  
  if ((array = (int**)(malloc(dimension * sizeof( int*)))) == NULL)
    {
      printf("Malo pamete!\n");
      exit(1);
    }
  
  for ( z = 0; z < dimension; z++ )
    {
      if (((array[z] = malloc(dimension * sizeof(int)))) == NULL)
	{
	  printf("Malo pamete!\n");
	  exit(1);
	}
    }
  
  for (ax_y = 0; ax_y < dimension; ax_y++)
    {
      for (ax_x = 0; ax_x < dimension; ax_x++)
	{
	  array[ax_x][ax_y] = 0;
	}
    }
  
  if (dimension % 2 == 0)
    {
      pos_x = dimension / 2 * K - K;
      pos_y = pos_x;
      array[pos_x][pos_y] = K;
    }
  
  else
    {
      pos_x = (dimension - K) / 2 * K;
      pos_y = pos_x;
      array[pos_x][pos_y] = K;
    }
  
  while ((pos_x + pos_y) > 0 && (pos_x + pos_y) < 2 * dimension - 2 * K)
    {
      i = rand() % 4;
      
      if (i == 0 && pos_y < dimension - K)
	{
	  pos_y++;
	  steps++;
	  array[pos_x][pos_y] += K;
	}
      
      if (i == 1 && pos_y > 0)
	{
	  pos_y--;
	  steps++;
	  array[pos_x][pos_y] += K;
	}
      
      if (i == 2 && pos_x < dimension - K)
	{
	  pos_x++;
	  steps++;
	  array[pos_x][pos_y] += K;
	}
      
      if (i == 3 && pos_x > 0)
	{
	  pos_x--;
	  steps++;
	  array[pos_x][pos_y] += K;
	}
      
      if (array[0][0] == K)
	break;
      
      if (array[dimension - K][dimension - K] == K)
	break;
    }
  
  for (ax_y = 0; ax_y < dimension; ax_y++)
    {
      for (ax_x = 0; ax_x < dimension; ax_x++)
	{
	  fprintf(fw, " %3d", array[ax_x][ax_y]);
	}
      fprintf(fw, "\n");
    }
  
  fprintf(fw, "\n");
  
  array[0][0] == K ? fprintf(fw, "Prisiel domov a presiel %u krokov.\n", steps):
    fprintf(fw, "Prisiel do baru a presiel %u krokov.\n", steps);
  
  if (fclose(fw) == EOF)
    ERROR2
      
  printf("Vysledky zapisane do suboru: array.txt!\n");
  
  return 0;
}
