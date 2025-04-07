#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(10 * sizeof(int)); // Alokacja pami�ci na 10 liczb typu int

    // Sprawdzenie czy alokacja si� powiod�a
    if (ptr == NULL) {
        printf("B��d alokacji pami�ci\n");
        return 1;
    }
    for(int i=0;i<10;i++){
        printf("%d\n", *(ptr+i));
    }

    // U�ycie zaalokowanej pami�ci
    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }

    for(int i=0;i<10;i++){
        printf("%d\n", *(ptr+i));
    }

    // Zwolnienie pami�ci
    free(ptr);

    return 0;
}
