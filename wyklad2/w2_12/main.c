#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%.20f\n", 0.1+0.2);
    printf("%.20f\n", 0.00001+1e30-1e29 *10);
    printf("%d\n", (int)3.4);
    printf("%d\n", (int)-3.4);
    printf("%f\n", 0.0/0.0);
    printf ("%Iu",sizeof(int));
    return 0;
}
