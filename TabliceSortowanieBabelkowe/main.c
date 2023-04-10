/*
Tablice
Sortowanie b¹belkowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int n = 10; //liczba elementów
    int t[] = {6, -4, 3, 11, 2, -5, 8, -20, 9, 1}; //tablica przeszukania
    int i,j,x;

    setlocale(LC_ALL, "");

    printf("Przed sortowaniem: \t");
    for(i = 0; i < n; i++) printf("%4d", t[i]);

//sortowanie b¹belkowe

for(i = 1; i < n; i++){ //wykonuje siê n - 1 razy. W tym miejscu pêtla wykonuje siê tle razy ile ma zmienna n pomniejszona o 1.
    for(j = 0; j < n - i; j++) //ten zapis s³abo rozumiem, ale nale¿y rozmumieæ to tak: Wykonuje siê pêtla ze zmienn¹ j tyle razy, a¿ j przestaje byæ mniejsze od n - i, czyli de facto pêtla wykona siê piêæ razy, ak to rozmumiem.
        if(t[j] > t [j + 1]){//sprawdzamy kolejnoœæ
        x = t[j]; //jeœli z³a, elementy zamieniamy
        t[j] = t[j + 1];
        t[j + 1] = x;
        }
}
    printf("\n\nPo sortowaniu:\t\t");
    for(i = 0; i < n; i++) printf("%4d", t[i]);
    printf("\n\n");

    return 0;
}
//Ca³oœæ wydaje siê wyj¹tkowo prosta
//Sortowanie babelkowe stosuje siê do malych tablic do 5 tys elementów
