#include <stdio.h>
#include <string.h>

#define PORADIE 5

typedef struct rezervacia
{
  char name[50];
  short int cislosed;
  char datum[11];
} REZERVACIA;

int main()
{
  int i;
  struct rezervacia REZERVACIA[PORADIE];
 
  strcpy(REZERVACIA[1].name, "Jozef Velky");
  REZERVACIA[1].cislosed = 1;
  strcpy(REZERVACIA[1].datum, "20.5.2017");
  
  strcpy(REZERVACIA[2].name, "Anton Zeleny");
  REZERVACIA[2].cislosed = 7;
  strcpy(REZERVACIA[2].datum, "26.5.2017");

  strcpy(REZERVACIA[3].name, "Fero Novak");
  REZERVACIA[3].cislosed = 11;
  strcpy(REZERVACIA[3].datum, "14.5.2017");

  strcpy(REZERVACIA[4].name, "Pavol Kovac");
  REZERVACIA[4].cislosed = 5;
  strcpy(REZERVACIA[4].datum, "10.5.2017");
  
  printf("Momentalne je pocet rezervacii: %d\n", PORADIE -1);
  
  printf("Zadajte poradove cislo pre overenie, pre koniec Ctrl-D.\n");
  while (scanf("%d", &i) == 1 && i != EOF)
    {
      if (i != '\n')
	if (i > 0 && i <= PORADIE - 1)
	  {
	    printf("Zarezervovane pre: %s\n", REZERVACIA[i].name);
	    printf("Cislo sedacky: %d\n", REZERVACIA[i].cislosed);
	    printf("Dna: %s\n", REZERVACIA[i].datum);
	    printf("\nZadajte poradove cislo pre overenie, pre koniec Ctrl-D.\n");
	  }
      
	else
	  {
	    printf("Cislo presahuje pocet rezervacii!\n");
	    printf("Zadajte poradove cislo pre overenie, pre koniec Ctrl-D.\n");
	  }
    }
  printf("Koniec.\n");
  return 0;
}


