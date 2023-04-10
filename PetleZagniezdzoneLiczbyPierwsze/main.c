/*
Pêtle zagnie¿d¿one
Liczby Pierwsze
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

    unsigned p; //liczba pierwsza
    unsigned a = 2; //dolna granica poszukiwañ liczb pierwszych
    unsigned b = 3000; //górna granica poszukiwania liczb pierwszych
    unsigned pp; //przechowuje pierwiastek z p
    unsigned d; //dzielnik
    char test; //do testowania

    setlocale(LC_ALL,"");

    printf("Wyznaczanie liczb pierwszych w przdziale od %u do %u\n", a, b);

    for(p = a; p <= b; p++){
        if(p == 2){
            printf("%8u", p);//tego nie sprawdzamy
            continue; // ten opis koæczy bie¿¹cy obieg pêtli i rozpoczyna nastêpny
        }
        pp = sqrt(p); //do pp pierwiastek ca³kowity z p
        test = 1;
        for(d = 2; d <= pp; d++)
        if(!(p % d)){
            test = 0; //p nie jest pierwsze
            break;  // ten opis koñczy obieg pêtli i z niej wychodzi
        }
        if(test) printf("%8u", p);
    }
printf("\n");

return 0;
}
