#include <stdio.h>
#include <stdlib.h>

int findWithCondition(int tab[], int n, int (*condition)(int)){
    int ind =-1;
    for(int i=0;i<n;i++){
        if (condition(tab[i]) == 1){
            ind = i;;
        }
    }
    return ind;
}

int pomoc(int arg){
    if (arg >0)
        return 1;
    return 0;
}

int main()
{
    int tab[] = {3,-4,5};
    printf("%d\n", findWithCondition(tab, 3, pomoc));
    return 0;
}
