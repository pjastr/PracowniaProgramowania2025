#include <stdio.h>
#include <stdlib.h>

int suma (int a, int b){
    printf("suma: %p %p\n", &a, &b);
    int temp = a+b;
    return temp;
}
int main()
{
    int a=4, b=6;
    printf("main: %p %p\n", &a, &b);
    int result = suma(a,b);
    printf("%d\n", result);
    return 0;
}
