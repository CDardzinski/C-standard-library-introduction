/*
Operatory ++ i --
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b, c, d;

    setlocale(LC_ALL,"");

    /*Przyk³ad 1


    a = b = c = d = 5;

    printf("Przed: a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    ++a;
    b++;
    --c;
    d--;
    printf("Po : a = %d, b = %d; c = %d; d = %d\n",a,b,c,d);


    */

    /*Przyk³ad 2
    */


    c = d = 5;

    a = c++;
    b = ++d;

    printf("a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
    return 0;
}
