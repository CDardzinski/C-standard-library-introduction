/*
Operatory porównañ
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");


/* Przyk³ad 1
    printf("%d\n\n", 3 > 2);
*/

/* Przyk³ad 2
*/
    printf("%d\n\n", 2 > 3);
    return 0;
}


// Operatory porównañ:
//  ==  równoœæ                 a==b, Równe 1, gdy a i b maj¹ t¹ sam¹ wartoœæ. Inaczej równe 0.
//  !=  ró¿noœæ                 a!=b, Równe 1, gdy a i b ró¿n¹ siê. Inaczej równe 0.
//  >   wiêkszoœæ               a>b,  Równe 1, gdy a jest wiêksze od b. Inaczej równe 0.
//  <   mniejszoœæ              a<b,  Równe 1, gdy a jest mniejsze od b. Inaczej równe 0.
//  >=  wiêkszoœæ lub równoœæ   a>=b, Równe 1, gdy a jest wiêksze lub równe b. Inaczej równe 0.
//  <=  mniejszoœæ lub równoœæ  a<=b, Równe 1, gdy a jest mniejsze lub równe b. Inaczej równe 0.
