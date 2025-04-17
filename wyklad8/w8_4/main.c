#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nap1[] = "Hel\0lo World";
    char nap2[100] = "Hel\0lo World";
    printf("%Iu\n",sizeof nap1);
    printf("%Iu\n",strlen(nap1));
    printf("%Iu\n",sizeof nap2);
    printf("%Iu\n",strlen(nap2));
    return 0;
}
