#include <stdio.h>
#include <stdlib.h>

int suma(int n,int tab[n])
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=tab[i];
    }
    return temp;
}

int main()
{
    int tablica[5]={1,-4,2,0,3};
    printf("%d\n",suma(5, tablica));
    int tablica2[5]={1,-4,2,0,3};
    return 0;
}
