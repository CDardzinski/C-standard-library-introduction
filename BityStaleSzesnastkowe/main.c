/*
Sta�e
Sta�e szesnastkowe ca�kowite
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    unsigned a = 0x1f; //sta�e szesnastkowa zawsze jest zapisywana z prefiksem 0x

    setlocale(LC_ALL, "");

    printf("HEX = %X DEC = %d\n", a, a);

    return 0;
}
