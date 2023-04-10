/*
Funkcje
U¿ycie stosu, do zbierania i wystawiania dancyh
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


//Funkcja wyœwietla podan¹ w parametrze liczbê
//--------------------------------------------

void print(unsigned x){

    char s[10]; //stos
    int sptr = 0; //wskzŸnik stosu (stack pointer)
    char c; //cyfra

    do
    {
        c = '0' + (x % 10);
        s[sptr++] = c; //cyfra na stos
        x = x /10;
    } while(x);
    while(sptr) putchar(s[--sptr]);
}

int main(){

    unsigned n;

    setlocale(LC_ALL, "");

    printf("Liczba = ");
    scanf("%u", &n);

    printf("Liczba = ");
    print(n);
    printf("\n\n");

    return 0;
}
