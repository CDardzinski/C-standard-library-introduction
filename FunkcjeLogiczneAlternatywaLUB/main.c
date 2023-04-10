/*
Funkcje logiczne
ALTERNATYWA
Po mojemy wyra¿enie LUB
Bramka OR!!!
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float a = 3.7; //zakres, dó³
    float b = 6.2; //zakre, góra
    float x = 3.699999; // parametr

    setlocale(LC_ALL, "");

    if((x < a) || (x > b)) printf("%f poza zakresem %f ... %f\n", x, a, b);
    else printf("%f w zakresie %f ... %f\n", x, a, b);

    return 0;

}
