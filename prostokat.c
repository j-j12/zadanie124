#include <stdio.h>
#include <stdlib.h>

int main()
{

int a;
int b;
int licznik;
int podstawa;
int wysoko��;
 printf("wybierz funkcje \n");
 printf("1. pole prostokata \n");
 printf("2. pole trojkata \n");
 scanf("%d", &licznik);
int wynik;
switch (licznik)
{

case 1:
    printf("wprowadz dlugosc boku a\n");
    scanf("%d", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%d", &b);
    wynik = a*b;
    printf("wynik=" "%d\n", wynik);

    break;
case 2:
    printf("wprowadz dlugosc podstawy\n");
    scanf("%d", &podstawa);
    printf("wprowadz dlugosc wysko�ci\n");
    scanf("%d", &wysoko��);
    wynik = 0.5*podstawa*wysoko��;
    printf("wynik=" "%d\n", wynik);

    break;
default:
    printf("zly wybor\n");
}
