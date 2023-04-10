/*
Operacje na tekstach
Teksty
Usuniêcie znaku, brak jest takiej funkcji w bibliotekach standardowych
Poni¿ej stworzona funkcja usuwaj¹ca znak
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Usuwa znak wskazany przez p
void delchar(char *p)
{
    if(p)//jeœli p wskazuje ³añcuch
        do
        {
            p++; //nastêpny znak w ³añcuchu
            *(p - 1) = *p; //kopiujemy znaki
        }while (*p); //a¿ do znaku Null w³¹cznie
}
int main()
{

    char t[80], *p;

    setlocale(LC_ALL, "");

    printf("Wpisz wiersz tekstu (do 79 znaków):\n\n");
    gets(t);
    p = t;
    while(*p)
        if(*p == 'a') delchar(p);
        else            p++;
    printf("%s\n\n", t);
    return 0;
}
