#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n =25;
    int i=0;
    while(i*i<=n){
        i++;
    }
    printf("czesc calkowita pierwistka %d\n", i-1);
    return 0;
}
