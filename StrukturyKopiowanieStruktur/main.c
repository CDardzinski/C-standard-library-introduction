/*
Struktury
Kopiowanie struktur
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego
struct Ts
{
    int a, b;
    float x;
};

int main()
{
    struct Ts s1 = {1, 8, 3.141591};
    struct Ts s2;

    setlocale(LC_ALL, "");

    s2 = s1;

    printf("s2.a = %d\n"
           "s2.b = %d\n"
           "s2.x = %f\n", s2.a, s2.b, s2.x);
    return 0;
}
