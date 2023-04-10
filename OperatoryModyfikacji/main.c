/*
Operatory modyfikacji
*/

//  += zwiêksza zawartoœæ zmiennej np: a += 5; //w zmiennej a o 5 wiêcej
//  -= zmniejsza zawartoœæ zmiennej np: a -= 4; // w zmiennej a o 4 mniej
//  *= mno¿y zawartoœæ zmiennej np: a *= 3; //potraja zmienn¹ a
//  /= dzieli zawartoœæ zmiennej np: a /= 2; //w zmiennej a bêdzie po³owa a
//  %= reszta z dzielenia zmiennej np: a %= 8; // w zmiennej a bêdzie reszta z dzielenia a przez 8


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
    p3 *= 3;    //3 * 3 * 3 * 3 * 3 = 3^5, dosyæ

    printf("3^5 = %d\n", p3);

    return 0;
}
