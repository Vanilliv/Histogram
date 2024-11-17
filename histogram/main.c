#include <stdio.h>
#include <stdlib.h>

void wypelnijTablice(char a[], int rozmiar){
    srand(time(NULL));
    for(int i = 0; i<rozmiar; i++){
        int mod = ((rand() % 2) == 0) ? 97 : 65;
        a[i] = (char)((rand() % 26) + mod);
    }
}

void histogram(char a[], int rozmiar){
   int h[256] = {0};
    for(int i = 0; i<rozmiar; i++){
        h[(unsigned char)a[i]]++;

    }
    for(int i = 0; i < 256; i++){
        if(h[i] > 0){
            printf("%c\t %i\n", (char)i, h[i]);
        }
    }
}



int main()
{
   int rozmiar = 1000000;
   int licznik[256] = {0};
   char tablica[rozmiar];
   printf("Tablica losowych znakow o rozmiarze %i\n", rozmiar);
   wypelnijTablice(tablica, rozmiar);
   printf("Tablica gotowa\n");
   histogram(tablica, rozmiar);
    return 0;
}
