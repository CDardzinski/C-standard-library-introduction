/*
Struktury
Przetwarzanie struktur
Pola struktur s¹ normalnymi zmiennymi i mo¿na na nich stosowaæ wszystkie dozolone instrukcji
(Niektóre mog¹ nie mieæ sensu)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Definicja typu strukturalnego

struct Txy
{
    float x,y;
};

int main()
{
    struct Txy a;

    setlocale(LC_ALL, "");

    a.x = 1;

    while(a.x <= 6)
        {
            a.y = sqrt(a.x);
            printf("Pierwiastek kwadratowy z %5.3f wynosi %5.3f\n", a.x, a.y);
            a.x += 0.125;
        }
    return 0;
}
