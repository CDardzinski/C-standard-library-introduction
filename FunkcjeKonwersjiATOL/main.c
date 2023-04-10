/*
Konwersje znakowo - liczbowe
Konwersja ATOL (ASCII string to long integer)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char s[] = "386799588";
    int b;

    setlocale(LC_ALL, "");

    //b = atol(s);

    //printf("%d\n", b);
    printf("%ld\n\n", atol(s));
    return 0;
}

/*
Funkcja ATOLL zamienia na integer typu long long int
*/
