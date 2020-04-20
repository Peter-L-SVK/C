#include <stdio.h>

void to_base(unsigned long number, int base);

int main(void)
{
  int base;
  unsigned long number;
  printf("Enter an integer and base from 2 to 10 (q to quit):\n");
  while (scanf("%lu %d", &number, &base) == 2)
    {
      printf("Base %d equivalent: ", base);
      to_base(number, base);
      putchar('\n');
      printf("Enter an integer and base from 2 to 10 (q to quit):\n");
    }
  printf("Done.\n");
  
  return 0;
}

void to_base(unsigned long number, int base)
{
  int rest;
  
  rest = number % base;
  if (number >= base)
    to_base(number / base, base);
  putchar('0' + rest);
  return;
}
