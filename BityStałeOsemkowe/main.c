/*
Sta�e
Sta�e ca�kowite �semkowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    unsigned a = 0377; //sta�e �semkowe musz� by� poprzedzone zerem

    setlocale(LC_ALL, "");

    printf("OCT = %o DEC = %d\n", a, a);

    return 0;
}
