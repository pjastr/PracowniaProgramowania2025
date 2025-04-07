#include <stdio.h>

int main() {
    short num = -20;
    int bits = sizeof(short) * 8;  // liczba bitów w typie short (16)

    printf("Liczba %d w systemie dwojkowym (kod uzupelnien do dwoch):\n", num);

    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }

    printf("\n");
    return 0;
}
