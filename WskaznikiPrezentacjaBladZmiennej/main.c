/*
Wskaüniki
B≥Ídne uøycie zmiennej do adresu wskaünika
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int *p; //wskaünik do zmiennej typu int
    float a,b;

    setlocale(LC_ALL, "");

    a = 10;
    b = 99;
    p = &a; //p wskazuje co zamiera siÍ pod adresem a
    printf("a = %d\n", *p); //wynikiem jest przeprowadzona kompilacja z ostrzeøeniem i b≥edne wyniki, poniewaø typ float zapisuje siÍ inaczej niø int
    p = &b;
    printf("b = %d\n", *p);

    return 0;

}
