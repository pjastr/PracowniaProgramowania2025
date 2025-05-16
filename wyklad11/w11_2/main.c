#include <stdio.h>
#include <stdlib.h>

int length(const char * txt){
    int i=0;
    while(txt[i]){
        i++;
    }
    return i;
}

char * toLowerNew(const char * txt){
    int d = length(txt);
    char * temp = malloc(sizeof(char) * (d+1));
    for(int i=0;i<d;i++){
        temp[i] = txt[i];
        if ('A' <= temp[i] && temp[i]<= 'Z'){
            temp[i] += ('a'-'A');
        }
    }
    temp[d] =0;
    return temp;
}

int main()
{
    char t1[] = "ABCxyz45";
    printf("%s\n", t1);
    char * w1 = toLowerNew(t1);
    printf("%s\n", t1);
    printf("%s\n", w1);
    char* t2 = "dhjhdHHH556";
    printf("%s\n", t2);
    char * w2 = toLowerNew(t2);
    printf("%s\n", t2);
    printf("%s\n", w2);
    return 0;
}
