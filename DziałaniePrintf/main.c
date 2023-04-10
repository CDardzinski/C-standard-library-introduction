/*
 Funkcja printf

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int a;
  char b;
  float c;

  setlocale(LC_ALL,"");

  a = 27;
  b = 65; // Kod litery A
  c = 3.141592;

  printf("Liczba dziesi�tna : %d\n",136);               //%d wy�wietlenie liczby ca�kowitej ze znakiem, \n znak ko�ca linii, (symbol %d mo�na zamiennie u�y� %i)
  printf("Dwie liczby dziesi�tne : %d %d\n",524,a);     //%d jak wy�ej
  printf("Liczba �semkowa : %o\n",12);                  //%o wy�wietlenie liczby �semkowej
  printf("Liczba dziesi�tna i �semkowa: %d %o\n",9,9);  // dwa powy�sze po��czone
  printf("dec oct hex : %d %o %x\n",100,100,100);       //%x wy�wietlenie liczby szesnastkowej z ma�ymi literami, jak si� zamienie na %X b�d� wielkie litery
  printf("Znak i jego kod : %c %d\n",b,b);              //%c wy�wietlenie znaku
  printf("Liczba pi : %f\n\n",c);                       //%f liczba zmiennoprzecinkowa, ma�e e, %F wielkie E
                                                        //%s wy�wielenie tekstu

  return 0;
}
