// Zadanie 4.8
// --------------------------------------
// Napisz program pokazujący zstosowanie dyrektywy preprocesora:
//   '#ifdef' (#else)
//   '#ifndef'
// oraz
//   '#define':
//   (a) użycie makra
//   (b) uzycie '#' i '##'
//   (a) i (b) stwórz także dla porównania bez dyrektywy preprocesora
// - nazwać program: ZadPreprocesor.cc
#include <stdio.h>

#define NAME "Jan Kowalski"

int main() {
#ifdef NAME
    printf("Imię i nazwisko: %s\n", NAME);
#else
    printf("Niezdefiniowano imienia i nazwiska.\n");
#endif

#ifndef AGE
    printf("Wiek niezdefiniowany.\n");
#endif

#undef NAME

#ifdef NAME
    printf("Imię i nazwisko: %s\n", NAME);
#else
    printf("Niezdefiniowano imienia i nazwiska.\n");
#endif

#define CONCAT(x, y) x ## y

int xy = 10;
printf("Wartość xy: %d\n", CONCAT(x, y));

#define STRINGIFY(x) #x

printf("Liczba 42 jako łańcuch: %s\n", STRINGIFY(42));

    printf("Wartość xy: %d\n", xy);


    printf("Liczba 42 jako łańcuch: %s\n", "42");



    return 0;
}