#ifndef __GUESS2_H__
#define __GUESS2_H__

#define MOZNOSTI 3

void clspause();
int getfirst();
int getnum();
void update_attempts(int answer, int pokusy[], int *pozicia, int *pocet_pokusov, const char *message);

#endif
