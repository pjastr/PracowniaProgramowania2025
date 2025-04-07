#include <stdlib.h>
#include <stdio.h>

int main() {
    // Alokacja pamiêci dla tablicy 10 liczb ca³kowitych
    int *tablica = (int*)calloc(10, sizeof(int));

    // Sprawdzenie czy alokacja siê powiod³a
    if (tablica == NULL) {
        printf("B³¹d alokacji pamiêci\n");
        return 1;
    }

    // U¿ywamy zaalokowanej pamiêci
    for (int i = 0; i < 10; i++) {
        printf("tablica[%d] = %d\n", i, *(tablica+i)); // Wszystkie wartoœci to 0
    }

    // Zwalniamy pamiêæ gdy nie jest ju¿ potrzebna
    free(tablica);

    return 0;
}
