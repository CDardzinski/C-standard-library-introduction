/*
Tablice
Obliczanie �redniej arytmetycznej z element�w tablicy
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int t[] = {6, -4, 3, 11, 2-5, 8, -20, 9, 0, 7}; //tablica do sumowania
    float suma = 0;                             //Zero jest trakotowane jako koniec danych w tablicy, nie mo�e by� z jedn� z warto�ci przypisanej elementowi w tablicy?? Czemu?
    float srednia;
    int i;

    setlocale(LC_ALL, "");

    for(i = 0; t[i]; i++) suma += t[i];
    if(i){
        srednia = suma / i;
        printf("Srednia wynosi: %f\n\n", srednia);
    }else
    printf("Tablica jest pusta!\n");
    printf("Ilo�c element�w w tablicy i = %d\n\n", i + 1);

    return 0;
}
