/*
TypyDanych
Jak sobie poradzic z precyzj� liczb zmiennoprzecinkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// dadaje biblioteke matematyczn�
#include <math.h>

int main(){

    float x = 0;

    setlocale(LC_ALL,"");

    x += 0.1; // x = 0,1
    x += 0.1; // x = 0.2
    x += 0.1; // x = 0.3
    x += 0.1; // x = 0.4
    x += 0.1; // x = 0.5
    x += 0.1; // x = 0.6
    x += 0.1; // x = 0.7
    x += 0.1; // x = 0.8
    x += 0.1; // x = 0.9
    x += 0.1; // x = 1?

//    if(x == 1.0) printf("WYNIK DOBRY\n");
//    else printf ("WYNIK B��DNY\n");
//    printf("%16.14f", x);

//modyfikuj� powy�szy warunek o epsylon, czyli r�nice w por�waniu wynik�w, �e nie mo�e by� wi�ksza ni�

    if(fabs(x - 1.0) < 0.00001)printf("WYNIK DOBRY\n"); //Funkcja fabs()oblicza warto�� bezwzgl�dn� liczb zmiennoprzecinkowych
    else printf("WYNIK B��DNY\n");
    printf ("%16.14f", x);

//Dadawanie u�amka 1/10 b�dzie obarczone b��dem, gdy� sam u�amek jest zaokr�glany
//przez to wychodzi b��dny wynik 1.0000001192929

    return 0;
}
