#include <stdio.h>

void print_character(char ch, int i, int j);

int main(void)
{
  int number_of_chars;
  int number_of_lines;
  char character;

  printf("Eneter the character you want to be printed (Ctrl-D to quit): \n");
  while ((character = getchar()) != EOF)
    {
      if (character == '\n')
	continue;
      printf("Enter the number of chars in line: \n");
      if (scanf("%d", &number_of_chars) != 1)
	break;
      printf("Enter the number of lines to be printed: \n");
      if (scanf("%d", &number_of_lines) != 1)
	break;
      print_character(character,number_of_chars,number_of_lines);
      printf("Eneter the character you want to be printed (Ctrl-D to quit): \n");
    }
  printf("Bye!\n");
  return 0;
}

void print_character(char ch, int i, int j)
{
  int ax_x, ax_y;
  for (ax_y = 0; ax_y <= j; ax_y++)
    {
      for (ax_x = 0; ax_x <= i; ax_x++)
	printf("%c",ch);
      printf("\n");
    }
}
