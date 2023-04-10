/*
Wyra¿enia logiczne
*/



// Operatory porównañ:
//  ==  równoœæ                 a==b, Równe 1, gdy a i b maj¹ t¹ sam¹ wartoœæ. Inaczej równe 0.
//  !=  ró¿noœæ                 a!=b, Równe 1, gdy a i b ró¿n¹ siê. Inaczej równe 0.
//  >   wiêkszoœæ               a>b,  Równe 1, gdy a jest wiêksze od b. Inaczej równe 0.
//  <   mniejszoœæ              a<b,  Równe 1, gdy a jest mniejsze od b. Inaczej równe 0.
//  >=  wiêkszoœæ lub równoœæ   a>=b, Równe 1, gdy a jest wiêksze lub równe b. Inaczej równe 0.
//  <=  mniejszoœæ lub równoœæ  a<=b, Równe 1, gdy a jest mniejsze lub równe b. Inaczej równe 0.

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
