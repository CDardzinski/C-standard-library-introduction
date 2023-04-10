/*
Struktury
Porownanie dwoch struktur
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego

struct Ts
{
    int a,b;
    float x;
};

int main()
{
    struct Ts s1 = {1, 8, 3.141592};
    struct Ts s2 = {1, 8, 3.141592};

    setlocale(LC_ALL, "");

    printf("s1 %s s2\n", (s1.a == s2.a)&&(s1.b == s2.b)&&(s1.x == s2.x)? "==":"!=");

    return 0;
}
