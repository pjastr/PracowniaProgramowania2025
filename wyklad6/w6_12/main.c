#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4

int main()
{
    int tab[ROZMIAR] ={2,3,-2,0};
    for(int i=0;i<ROZMIAR;i++)
    {
        printf("%p %d\n",&tab[i], tab[i]);
        printf("%p %d\n",tab+i, *(tab+i) );
    }
    return 0;
}
