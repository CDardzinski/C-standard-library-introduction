/*
Struktury
WskaŸnik do struktury

struct nazwa_struktury * wskaznik

Dostêp do pól uzyskuje siê za pomoc¹ strza³ki

wskaznik -> pole_struktury

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

struct TPunkt
{
    float x, y;
    char n;
};

//Funkcja wyœwietla wspó³rzêdne punktu
//------------------------------------

void pp(struct TPunkt * p)
{
    printf("Punkt %c:(%5.2f, %5.2f) \n", p -> n, p -> x, p -> y);
}

//Funkcja oblicza odleg³oœæ dwóch punktów
float len(struct TPunkt * a, struct TPunkt * b)
{
    float x = b -> x - a -> x;
    float y = b -> y - a -> y;

    return sqrt(x*x + y*y);
}

//Funkcja wyœwietla wyniki
void pr(struct TPunkt * a, struct TPunkt * b)
{
    pp(a);
    pp(b);
    printf("Odleglosc od %c do %c = %5.2f\n\n", a -> n, b -> n, len(a,b));
}

int main()
{
    struct TPunkt a = {1, 0, 'A'};
    struct TPunkt b = {2, 1, 'B'};
    struct TPunkt c = {2, 2, 'C'};

    setlocale(LC_ALL, "");

    pr(&a, &b);
    pr(&b, &c);
    pr(&c, &a);

    return 0;

}
