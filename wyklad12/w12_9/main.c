#include <stdio.h>
#include <stdlib.h>

#pragma pack ( 1 )
 struct Struktura {
   char pole3;
   int pole1;
   int pole2;

 };

int main()
{
    struct Struktura zmiennaS =
        { .pole1=60, .pole2=0.2, .pole3='a'};
    printf("%d\n",zmiennaS);
    printf("%p\n",&zmiennaS);
    printf("%p\n",&zmiennaS.pole1);
    printf("%p\n",&zmiennaS.pole2);
    printf("%p\n",&zmiennaS.pole3);
}
