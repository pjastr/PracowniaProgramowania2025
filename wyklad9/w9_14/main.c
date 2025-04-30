#include <stdio.h>
#include <stdlib.h>

void foo(char*napis)
{
    *napis='a';
}

int main()
{
    char t1 []= "werc";
    printf("%s\n", t1);
    foo(t1);
    printf("%s\n", t1);
    return 0;
}
