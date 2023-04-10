/*
P�tle zagnie�d�one
Liczby Pierwsze
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    unsigned p; //liczba pierwsza
    unsigned a = 2; //dolna granica poszukiwa� liczb pierwszych
    unsigned b = 3000; //g�rna granica poszukiwania liczb pierwszych
    unsigned pp; //przechowuje pierwiastek z p
    unsigned d; //dzielnik
    char test; //do testowania

    setlocale(LC_ALL,"");

    printf("Wyznaczanie liczb pierwszych w przdziale od %u do %u\n", a, b);

    for(p = a; p <= b; p++){
        if(p == 2){
            printf("%8u", p);//tego nie sprawdzamy
            continue; // ten opis ko�czy bie��cy obieg p�tli i rozpoczyna nast�pny
        }
        pp = sqrt(p); //do pp pierwiastek ca�kowity z p
        test = 1;
        for(d = 2; d <= pp; d++)
        if(!(p % d)){
            test = 0; //p nie jest pierwsze
            break;  // ten opis ko�czy obieg p�tli i z niej wychodzi
        }
        if(test) printf("%8u", p);
    }
printf("\n");

return 0;
}
