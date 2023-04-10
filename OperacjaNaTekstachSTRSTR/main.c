/*
Operacje na tekstach
Teksty
Funkcja STRSTR - string to string zwraca adres pierwszego wyst¹pienie ³añcucha s2 w ³añcuchu s1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char s1[] = "Kuba nie lubi kawy, mleka i kakao";
    char s2[] = "ka";
    char *p;
    int i;

    setlocale(LC_ALL, "");

    strcpy(s1,"Kuba nie lubi kawy, mleka i kakao");
    strcpy(s2, "ka" );
    p = s1;
    printf("Przed: %s\n\n", s1);
    while((p = strstr(p, s2)))
        for(i = 0; s2[i]; i++) *p++ -= 32;
    printf("Po : %s\n\n", s1);

    return 0;
}
