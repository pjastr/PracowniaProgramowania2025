#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char txt[]){
    for(int i=0; txt[i] !=0;i++){
        if (65 <= txt[i] && txt[i] <= 90){
            txt[i] +=32;
        }
    }
}

int main()
{
    char t1[] = "ABCxyz45";
    printf("%s\n", t1);
    toLowerNew(t1);
    printf("%s\n", t1);
    return 0;
}
