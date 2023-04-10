/*
Sta³e
Sta³e ca³kowite ósemkowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    unsigned a = 0377; //sta³e ósemkowe musz¹ byæ poprzedzone zerem

    setlocale(LC_ALL, "");

    printf("OCT = %o DEC = %d\n", a, a);

    return 0;
}
