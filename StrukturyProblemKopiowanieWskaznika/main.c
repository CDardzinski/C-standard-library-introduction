/*
Struktury
Problem kopiowania struktury zawieraj�cej wska�nik, w efekcie kopiujemy tylko zdres do zmiennej, a nie sam� zmienn� i dwie struktury wtedy wskazuj� na ten sam obszar pami�ci
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego
struct Ts
{
    int x;
    int *p; //wska�nik
};

int main()
{
    struct Ts a,b;

    setlocale(LC_ALL, "");

    a.x = 10;
    a.p = &a.x; //pole p wskazuje na pole x w strukturze a

    b = a;//do struktury b kopiujemy struktur� a
    *b.p = 99; //zmieniamy zawarto�� danej wskazywanej przez p w b
    //Co si� zmieni�o?
    printf("a.x = %d\n"
           "b.x = %d\n", a.x, b.x);

    return 0;
}
