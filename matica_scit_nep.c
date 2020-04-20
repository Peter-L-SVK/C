#include <stdio.h>

int main()
{
  int mat_1[2][3] = {
		     {1, 2, 6},
		     {-3, 4, 4}
  };

  int mat_2[2][3] = {
		     {2, -1, 5},
		     {-1, -2, 7}
  };

  int mat_add[2][2];

  printf("Additions of two matrices:\n");
  printf("First matrix is:\n");
  for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  printf("%3d",mat_1[i][j]);
	}
      printf("\n");
    }
  printf("\n");
  printf("Second matrix is:\n");
  for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  printf("%3d",mat_2[i][j]);
	}
       printf("\n");
    }
  for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  mat_add[i][j] = mat_1[i][j] + mat_2[i][j];
	}
    }
  printf("\n");
  printf("Result of addition of M1 + M2 is:\n");
  for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  printf("%3d", mat_add[i][j]);
	}
      printf("\n");
    }
  printf("\n");

  return 0;
}
