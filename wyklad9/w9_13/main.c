#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int temp=0;
    while(*(napis++))
    {
        temp++;
    }
    return temp;
}

int main()
{
    printf("%d\n", dlugosc("ab\nc"));
    return 0;
}
