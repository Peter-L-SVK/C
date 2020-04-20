#include <stdio.h>
#define HORNY 300
#define DOLNY 0
#define KROK 20

int main()
{
  int celsius;
 
  printf("******************************************************\n");
  printf("Tabulka prevodu stupnov Celsia do stupnov Fahrenheita:\n");
  printf("******************************************************\n");

  for (celsius = HORNY; celsius >= DOLNY; celsius = celsius - KROK) 
    printf("%3d C = %3g F\n", celsius, (9.0 / 5.0)*celsius+32);
  
  printf("******************************************************\n");
  return 0;
}
