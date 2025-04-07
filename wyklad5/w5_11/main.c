#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alokacja pamiêci na tablicê 5 liczb ca³kowitych
    int *tablica = (int*)malloc(5 * sizeof(int));

    // Sprawdzenie czy alokacja siê powiod³a
    if (tablica == NULL) {
        printf("B³¹d alokacji pamiêci\n");
        return 1;
    }

    // U¿ywamy zaalokowanej pamiêci
    for (int i = 0; i < 5; i++) {
        tablica[i] = i * 10;
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }

    // Zwalniamy pamiêæ gdy nie jest ju¿ potrzebna
    free(tablica);

    // Po zwolnieniu pamiêci wskaŸnik staje siê "wisz¹cym wskaŸnikiem"
    // Dobr¹ praktyk¹ jest ustawienie go na NULL
    tablica = NULL;

    return 0;
}
