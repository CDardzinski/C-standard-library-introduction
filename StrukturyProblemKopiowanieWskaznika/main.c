/*
Struktury
Problem kopiowania struktury zawieraj¹cej wskaŸnik, w efekcie kopiujemy tylko zdres do zmiennej, a nie sam¹ zmienn¹ i dwie struktury wtedy wskazuj¹ na ten sam obszar pamiêci
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Definicja typu strukturalnego
struct Ts
{
    int x;
    int *p; //wskaŸnik
};

int main()
{
    struct Ts a,b;

    setlocale(LC_ALL, "");

    a.x = 10;
    a.p = &a.x; //pole p wskazuje na pole x w strukturze a

    b = a;//do struktury b kopiujemy strukturê a
    *b.p = 99; //zmieniamy zawartoœæ danej wskazywanej przez p w b
    //Co siê zmieni³o?
    printf("a.x = %d\n"
           "b.x = %d\n", a.x, b.x);

    return 0;
}
