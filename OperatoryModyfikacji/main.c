/*
Operatory modyfikacji
*/

//  += zwi�ksza zawarto�� zmiennej np: a += 5; //w zmiennej a o 5 wi�cej
//  -= zmniejsza zawarto�� zmiennej np: a -= 4; // w zmiennej a o 4 mniej
//  *= mno�y zawarto�� zmiennej np: a *= 3; //potraja zmienn� a
//  /= dzieli zawarto�� zmiennej np: a /= 2; //w zmiennej a b�dzie po�owa a
//  %= reszta z dzielenia zmiennej np: a %= 8; // w zmiennej a b�dzie reszta z dzielenia a przez 8


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int p3;

    setlocale(LC_ALL,"");

    p3 = 3;     //3 = 3^1
    p3 *= 3;    //3 * 3 = 3^2
    p3 *= 3;    //3 * 3 * 3 = 3^3
    p3 *= 3;    //3 * 3 * 3 * 3 = 3^4
    p3 *= 3;    //3 * 3 * 3 * 3 * 3 = 3^5, dosy�

    printf("3^5 = %d\n", p3);

    return 0;
}
