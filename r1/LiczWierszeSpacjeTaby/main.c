#include <stdio.h>
#include <stdlib.h>

#define KONIEC 'q'

int main()
{
    char c = '0';
    int wiersz = 0;
    int spacje = 0;
    int taby = 0;

    printf("Zliczanie wierszy, spacji, tabow\n");

    while((c = getchar()) != KONIEC && c != EOF)
    {
        if(c == '\n') wiersz++;
        else if(c == ' ') spacje++;
        else if(c == '\t') taby++;

        printf("w=%i, s=%i, t=%i\n", wiersz, spacje, taby);
        fflush(stdin);  // to nie zawsze dzia³a

    }

    //printf("w=%i, s=%i, t=%i\n", wiersz, spacje, taby);



    return 0;
}
