/*
Wksazniki
Przeskakiwanie miedzy elementami tabicy o jako� warto� miniejsz� od wielko�ci tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n = 5; //liczba element�w w tablicy
    float t[] = {1.55, 3.99, 7.18, 0.56, -2.51};
    float *p; //wskzanik do danej typu float
    int i;

    setlocale(LC_ALL, "");

    p = t; //p wskazuje pierwszy element tablicy
    for(i = 0; i < n; i++) //i - indeksy koleknych element�w tablicy
   //     printf("%6.2f", *(p+i));
        printf("%6.2f", *(t+i));
    printf("\n\n");

    for(i = 0; i < n; i++) //i - indeksy kolejnych element�w tablicy
    //    printf("%6.2f", t[i]);
        printf("%6.2f", p[i]);
    printf("\n\n");

    return 0;

}
