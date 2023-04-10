/*
Tablice
Sortowanie b�belkowe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int n = 10; //liczba element�w
    int t[] = {6, -4, 3, 11, 2, -5, 8, -20, 9, 1}; //tablica przeszukania
    int i,j,x;

    setlocale(LC_ALL, "");

    printf("Przed sortowaniem: \t");
    for(i = 0; i < n; i++) printf("%4d", t[i]);

//sortowanie b�belkowe

for(i = 1; i < n; i++){ //wykonuje si� n - 1 razy. W tym miejscu p�tla wykonuje si� tle razy ile ma zmienna n pomniejszona o 1.
    for(j = 0; j < n - i; j++) //ten zapis s�abo rozumiem, ale nale�y rozmumie� to tak: Wykonuje si� p�tla ze zmienn� j tyle razy, a� j przestaje by� mniejsze od n - i, czyli de facto p�tla wykona si� pi�� razy, ak to rozmumiem.
        if(t[j] > t [j + 1]){//sprawdzamy kolejno��
        x = t[j]; //je�li z�a, elementy zamieniamy
        t[j] = t[j + 1];
        t[j + 1] = x;
        }
}
    printf("\n\nPo sortowaniu:\t\t");
    for(i = 0; i < n; i++) printf("%4d", t[i]);
    printf("\n\n");

    return 0;
}
//Ca�o�� wydaje si� wyj�tkowo prosta
//Sortowanie babelkowe stosuje si� do malych tablic do 5 tys element�w
