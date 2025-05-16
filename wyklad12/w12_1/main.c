#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};
    printf("%p\n",&tab[0][0]);
    printf("%p\n",&tab[0][2]);
    printf("%p\n",&tab[1][1]);
    char txt[100] ;
    sprintf(txt,"%d", tab[0][0]);
    fputs(txt, stdout);
    return 0;
}
