#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int tab[]){
    int temp =tab[0];
    for(int i=1;i<n;i++){
        if (tab[i] >temp){
            temp = tab[i];
        }
    }
    return temp;
}

int main()
{
    int tab[] = {-4,-5,-6,-11};
    printf("%d\n", maxValue(4, tab));
    return 0;
}
