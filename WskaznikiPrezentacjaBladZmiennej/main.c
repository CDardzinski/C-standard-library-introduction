/*
Wska�niki
B��dne u�ycie zmiennej do adresu wska�nika
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int *p; //wska�nik do zmiennej typu int
    float a,b;

    setlocale(LC_ALL, "");

    a = 10;
    b = 99;
    p = &a; //p wskazuje co zamiera si� pod adresem a
    printf("a = %d\n", *p); //wynikiem jest przeprowadzona kompilacja z ostrze�eniem i b�edne wyniki, poniewa� typ float zapisuje si� inaczej ni� int
    p = &b;
    printf("b = %d\n", *p);

    return 0;

}
