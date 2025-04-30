#include <stdio.h>

int main()
{
    char tekst1[]="abc.";
    char tekst2[]= {'a','b','c','*', '\0'};
    char tekst3[]="xyz|";
    fputs(tekst1,stdout);
    fputs(tekst2,stdout);
    fputs(tekst3,stdout);
    printf("%p\n", tekst1);
    printf("%p\n", tekst2);
    printf("%p\n", tekst3);
    return 0;
}
