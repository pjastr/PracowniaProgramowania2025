#include <stdio.h>
#include <stdlib.h>

float potegaDwa(int n){
    float temp=1;
    if (n<0){
        for(int i=-1;i>=n;i--){
        temp /= 2;
        }
    }
    else{
        for(int i=1;i<=n;i++){
            temp *= 2;
        }
    }
    return temp;
}

int main()
{
    printf("%f\n", potegaDwa(-4));
    return 0;
}
