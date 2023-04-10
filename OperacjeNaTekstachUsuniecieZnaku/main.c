/*
Operacje na tekstach
Teksty
Usuni�cie znaku, brak jest takiej funkcji w bibliotekach standardowych
Poni�ej stworzona funkcja usuwaj�ca znak
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Usuwa znak wskazany przez p
void delchar(char *p)
{
    if(p)//je�li p wskazuje �a�cuch
        do
        {
            p++; //nast�pny znak w �a�cuchu
            *(p - 1) = *p; //kopiujemy znaki
        }while (*p); //a� do znaku Null w��cznie
}
int main()
{

    char t[80], *p;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz tekstu (do 79 znak�w):\n\n");
    gets(t);
    p = t;
    while(*p)
        if(*p == 'a') delchar(p);
        else            p++;
    printf("%s\n\n", t);
    return 0;
}
