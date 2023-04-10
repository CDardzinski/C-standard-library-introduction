/*
Operacje na tekstach
Teksty
Wtawianie znaku, brak jest takiej funkcji w bibliotekach standardowych
Poni¿ej stworzona funkcja wstawiania znaku
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Dodaje znak na pozycje p
void inschr(char *p, char a)
{
    if(p)//jeœli p wskazuje ³añcuch
    {
        memmove(p + 1, p, strlen(p) + 1); //robimy miejsce
        *p = a; //wstawiamy znak
    }
}
int main()
{

    char t[80], *p;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz tekstu (do 79 znaków):\n\n");
    gets(t);
    p = t;
    while(*p)
    {
        if(*p == 'a') inschr(p++, 'x');
        p++;
    }
    printf("%s\n\n", t);
    return 0;
}
