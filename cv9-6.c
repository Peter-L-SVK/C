#include <stdio.h>

void moves(double *x, double *y, double *z);

int main(void)
{
  double first_number, second_number, third_number;

  printf("Enter three numbers (q to quit): \n");
  while (scanf("%lf %lf %lf", &first_number, &second_number, &third_number) == 3)
    {
      moves(&first_number,&second_number,&third_number);
      printf("The order of numbers is %lf, %lf and %lf\n", first_number, second_number, third_number);
      printf("Enter three numbers (q to quit): \n");
    }
  printf("Bye!\n");
  return 0;
}

void moves(double *x, double *y, double *z)
{
  double temporary;

  if (*x > *y)
    {
      temporary = *x;
      *x = *y;
      *y = temporary;
    }
  
  if (*y > *z)
    {
      temporary = *y;
      *y = *z;
      *z = temporary;
    }

   if (*x > *y)
    {
      temporary = *x;
      *x = *y;
      *y = temporary;
    }
}
