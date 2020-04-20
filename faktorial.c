#include <stdio.h>

int fakt(int n);

int main()
{
  unsigned long long int i = 0, j = 0;
  printf("Zadaj prirodzene cislo: ");
  scanf("%d", &i);
  j = i;
  printf("Faktorial cisla %d je: %llu\n", j,  fakt(i));

  return 0;
}

int fakt(int n)
{
  
  return ((n <= 0) ? 1 : n * fakt(n - 1));
}
