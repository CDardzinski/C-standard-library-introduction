/*
Konwersje znakowo - liczbowe
Konwersja ATOI (ASCII string to integer)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char s[] = "-1236";
    int b;

    setlocale(LC_ALL, "");

    //b = atoi(s);

    //printf("%d\n", b);
    printf("%d\n\n", atoi(s));
    return 0;
}
