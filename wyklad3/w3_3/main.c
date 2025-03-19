#include <stdio.h>

int main() {
    int a, b;
    printf("Podaj dwie liczby:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int max = (a > b) ? a : b;
    printf("Najwiêksza liczba to: %d\n", max);
    return 0;
}
