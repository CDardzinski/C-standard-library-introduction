/*
TypyDanych
Jak sobie poradzic z precyzj¹ liczb zmiennoprzecinkowych
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// dadaje biblioteke matematyczn¹
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
//    else printf ("WYNIK B£ÊDNY\n");
//    printf("%16.14f", x);

//modyfikujê powy¿szy warunek o epsylon, czyli ró¿nice w porówaniu wyników, ¿e nie mo¿e byæ wiêksza ni¿

    if(fabs(x - 1.0) < 0.00001)printf("WYNIK DOBRY\n"); //Funkcja fabs()oblicza wartoœæ bezwzglêdn¹ liczb zmiennoprzecinkowych
    else printf("WYNIK B£ÊDNY\n");
    printf ("%16.14f", x);

//Dadawanie u³amka 1/10 bêdzie obarczone b³êdem, gdy¿ sam u³amek jest zaokr¹glany
//przez to wychodzi b³êdny wynik 1.0000001192929

    return 0;
}
