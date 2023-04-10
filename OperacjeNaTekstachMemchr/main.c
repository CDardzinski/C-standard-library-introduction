/*
Operacje na tekstach
Funkcje pami�ci MEMCHR
Przeszukuje zadany obszar pamieci szukaj�c bajtu o podanej warto�ci
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    char t[] = {12, 76, 33, 11, 55, 97, 48, 62, 81};
    char v = 48; //szukana warto��
    char *p;
    int i;

    setlocale(LC_ALL, "");

    p = memchr(t, v, 9);
    printf("Szukane %d: ", v);

    if(p)
    {
        printf("na pozycji %d w t[]\n\n"
               "t[] = ", p - t);
        for(i = 0; i < 9; i++)
        if(p == &t[i]) printf("{%d} ", t[i]);
        else           printf(" %d ", t[i]);
    }
    else printf("BRAK W t[]");
    printf("\n\n");

    return 0;
}
