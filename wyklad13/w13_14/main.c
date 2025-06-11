#include <stdio.h>
#include <stdlib.h>

enum miasta {OLSZTYN=5, GDANSK, KRAKOW=4, WARSZAWA, BYDGOSZCZ};

int main()
{
    enum miasta m1 = WARSZAWA;
    //printf("%s\n",m1);
    printf("%d\n",m1);
    printf("%u\n",m1);
    return 0;
}
