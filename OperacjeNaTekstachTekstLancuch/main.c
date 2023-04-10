/*
Operacje na tekstach
Teksty/£añcuch
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *p = "Hulaj dusza ile wola!";

    setlocale(LC_ALL, "");

    while(*p) printf("znak tekstu %c\n", *p++);

    return 0;
}
