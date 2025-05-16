#include <stdio.h>
#include <stdlib.h>

char* foo()
{
    return "abc";
}

int main()
{
    printf("%s\n",foo());
    const char * w = foo();
    //w[0] = '5';
    return 0;
}
