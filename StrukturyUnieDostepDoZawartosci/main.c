/*
Struktry
Unie dostêp do zawartoœci
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    union
    {
        char a;
        int b;
        float c;
    }u;

    setlocale(LC_ALL, "");

    u.c = 3.141592;
    printf("Pole a = %c\n"
           "Pole b = %d\n"
           "Pole c = %f\n\n", u.a, u.b, u.c);

    u.b = 1234567890;
    printf("Pole a = %c\n"
           "Pole b = %d\n"
           "Pole c = %f\n\n", u.a, u.b, u.c);

    u.a = 'A';
    printf("Pole a = %c\n"
           "Pole b = %d\n"
           "Pole c = %f\n\n", u.a, u.b, u.c);

    return 0;
}
