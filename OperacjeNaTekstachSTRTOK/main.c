/*
Operacje na tekstach
Teksty
Funkcja STRTOK - rozbija �a�uch na poszczeg�lne s�owa
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char s[80], *p, *t = ",?!.;: ";
    int i;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz tekstu (do 79 znak�w):\n\n");
    gets(s);
    printf("\n");
    p = strtok(s, t); //pierwsze s�owo
    i = 1;
    while(p) //dop�ki s� s�owa
    {
        printf("Wyraz nr %2d : %s\n", i++, p);
        p = strtok(NULL, t); //nast�pne s�owa
    }
    return 0;
}
