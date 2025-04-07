#include <stdio.h>
#include <stdlib.h>

int potegaDwa(int n);

int main()
{
    printf("%d\n", potegaDwa(-4));
    return 0;
}

int potegaDwa(int n){
    if (n<0){
        exit(-1);
    }
    int temp=1;
    for(int i=1;i<=n;i++){
        temp *= 2;
    }
    return temp;
}
