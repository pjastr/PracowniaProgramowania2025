#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};
    printf("%p\n", tab);
    printf("%p\n", tab[0]);
    printf("%p\n", tab+0);
    printf("%p\n", tab[1]);
    printf("%p\n", tab+1);
    printf("%d\n", ** tab);
    printf("%d\n", **(tab+1));
    printf("%d\n", tab[0][2]);
    printf("%d\n", tab[0][3]);
    printf("%d\n", tab[0][6]);
    return 0;
}
