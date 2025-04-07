#include <stdio.h>
#include <stdlib.h>

int calculate(int (*operation)(int), int number){
    return operation(number);
}

int square(int a){
    return a*a;
}

int cube(int a){
    return a*a*a;
}

int main()
{
    printf("%d\n", calculate(square, 7));
    printf("%d\n", calculate(cube, -3));
    return 0;
}
