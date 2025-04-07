#include <stdlib.h>
#include <stdio.h>

int main() {
    // Alokacja pami�ci dla tablicy 10 liczb ca�kowitych
    int *tablica = (int*)calloc(10, sizeof(int));

    // Sprawdzenie czy alokacja si� powiod�a
    if (tablica == NULL) {
        printf("B��d alokacji pami�ci\n");
        return 1;
    }

    // U�ywamy zaalokowanej pami�ci
    for (int i = 0; i < 10; i++) {
        printf("tablica[%d] = %d\n", i, *(tablica+i)); // Wszystkie warto�ci to 0
    }

    // Zwalniamy pami�� gdy nie jest ju� potrzebna
    free(tablica);

    return 0;
}
