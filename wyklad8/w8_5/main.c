#include <stdio.h>
#define NAPIS "jaki� tekst"

int main()
{
    char tab[] = NAPIS;
    char *wsk = NAPIS;
    printf("adres napisu %p\n", "jaki� tekst");
    printf("adres tab: %p\n", tab);
    printf("adres wsk: %p\n", wsk);
    printf("adres NAPIS-u: %p\n", NAPIS);
    tab[0] = 't';
    return 0;
}
