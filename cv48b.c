#include <stdio.h>
#include <ctype.h>

#define ERROR {printf("Subor sa nepodarilo otvorit!\n"); return 1.1;}
#define ERROR2 {printf("Subor sa nepodarilo uzavriet!\n"); return 0.5;}
#define RIADKY_OBR 20

void vypis(FILE *fr);
double vypis_sub(void);

int main(void)
{
	while (vypis_sub()!=2.2)
		;
	
	return 0;
}

double vypis_sub(void)
{
	FILE *fr;
	char nazov[100];
	char c;
	printf("Zadaj nazov suboru na otvorenie: ");
	scanf("%s", &nazov);
	
	while(getchar()!='\n')
		;

	if (toupper(nazov[0])=='K')
		return 2.2;
	
	if ((fr=fopen(nazov, "r"))==NULL)
		ERROR
	
	vypis(fr);
	
	if (fclose(fr)==EOF)
		ERROR2
	
}

void vypis(FILE *fr)
{
	int c, pocet=1;
	while ((c=getc(fr))!=EOF){
		putchar(c);
		if(c=='\n'){
			if (++pocet>=RIADKY_OBR){
				pocet=1;
				while(getchar()!='\n')
					;
			}
		
		}
	}
}
