/*
Konwersje znakowo - liczbowe
Konwersja ATOF (ASCII string to floating point number)
oblicza wartoœæ dzesiêtn¹, a
wynik zwracany do zmiennej typu double,
je¿eli nie da sie zinterpretowaæ zwraca 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char s[] = "3.141575";
    int b;

    setlocale(LC_ALL, "");

//    b = atof(s);

//   printf("%f\n", b);
    printf("%9.6f\n\n", atof(s));
    return 0;
}

