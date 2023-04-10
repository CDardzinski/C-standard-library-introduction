/*
Tablice
Obliczanie œredniej arytmetycznej z elementów tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int t[] = {6, -4, 3, 11, 2-5, 8, -20, 9, 0, 7}; //tablica do sumowania
    float suma = 0;                             //Zero jest trakotowane jako koniec danych w tablicy, nie mo¿e byæ z jedn¹ z wartoœci przypisanej elementowi w tablicy?? Czemu?
    float srednia;
    int i;

    setlocale(LC_ALL, "");

    for(i = 0; t[i]; i++) suma += t[i];
    if(i){
        srednia = suma / i;
        printf("Srednia wynosi: %f\n\n", srednia);
    }else
    printf("Tablica jest pusta!\n");
    printf("Iloœc elementów w tablicy i = %d\n\n", i + 1);

    return 0;
}
