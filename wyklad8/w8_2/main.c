#include <stdio.h>
#include <stdlib.h>

int maxValue(int n, int tab[n]) {
    if (n == 1) {
        return tab[0];
    }
    int max = maxValue(n - 1, tab+1);
    return (tab[0] > max) ? tab[0] : max;
}

int main() {
    int tab[] = {1, -2, 12, -4, 22};
    printf("maxValue: %d\n", maxValue(5, tab));
    return 0;
}
