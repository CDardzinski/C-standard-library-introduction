/*
Operacje na tekstach
Teksty
Funkcja STRTOK - rozbija ³añuch na poszczególne s³owa
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

    printf("Wpisz wiersz tekstu (do 79 znaków):\n\n");
    gets(s);
    printf("\n");
    p = strtok(s, t); //pierwsze s³owo
    i = 1;
    while(p) //dopóki s¹ s³owa
    {
        printf("Wyraz nr %2d : %s\n", i++, p);
        p = strtok(NULL, t); //nastêpne s³owa
    }
    return 0;
}
