/*
Struktury
Zerowanie struktury
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego
struct Ts
{
    char t[10];
    int a, b;
    float x,y;
};

int main()
{
    struct Ts s = {"Hejka!", 6, 125, 6.28, -15.44};
    void * p = &s; //w p adres struktury s
    int i;

    setlocale(LC_ALL, "");

    printf("Przed: \n%s \n%d \n%d \n%f \n%f \n\n", s.t, s.a, s.b, s.x, s.y);
    for(i = sizeof(s); i; i--) *(char *)p++ = 0;
    printf("Po: \n%s \n%d \n%d \n%f \n%f \n\n", s.t, s.a, s.b, s.x, s.y);

    return 0;
}
