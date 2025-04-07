#include <stdio.h>
#include <stdlib.h>

int ciag(int k){
    if (k<0){
        exit(-1);
    }
    if(k==0 || k ==1){
        return 1;
    }
    if (k%3 ==0){
        return ciag(k/3);
    }
    if (k%3 ==1){
        return ciag(k-1)-1;
    }
    return ciag(k-1)+1;
}

int main()
{
    printf("%d\n", ciag(4));
    return 0;
}
