/*
Wyra�enia logiczne
*/



// Operatory por�wna�:
//  ==  r�wno��                 a==b, R�wne 1, gdy a i b maj� t� sam� warto��. Inaczej r�wne 0.
//  !=  r�no��                 a!=b, R�wne 1, gdy a i b r�n� si�. Inaczej r�wne 0.
//  >   wi�kszo��               a>b,  R�wne 1, gdy a jest wi�ksze od b. Inaczej r�wne 0.
//  <   mniejszo��              a<b,  R�wne 1, gdy a jest mniejsze od b. Inaczej r�wne 0.
//  >=  wi�kszo�� lub r�wno��   a>=b, R�wne 1, gdy a jest wi�ksze lub r�wne b. Inaczej r�wne 0.
//  <=  mniejszo�� lub r�wno��  a<=b, R�wne 1, gdy a jest mniejsze lub r�wne b. Inaczej r�wne 0.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int h = 0;

    setlocale(LC_ALL,"");
//1
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//2
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//3
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//4
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//5
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//6
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//7
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//8
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//9
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//10
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//11
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//12
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//13
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//14
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//15
    printf("%c", 48 + h + 7 * (h > 9));
        h++;
//16
    printf("%c\n\n", 48 + h + 7 * (h > 9));

    return 0;

}
