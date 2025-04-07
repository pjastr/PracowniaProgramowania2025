#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alokacja pami�ci na tablic� 5 liczb ca�kowitych
    int *tablica = (int*)malloc(5 * sizeof(int));

    // Sprawdzenie czy alokacja si� powiod�a
    if (tablica == NULL) {
        printf("B��d alokacji pami�ci\n");
        return 1;
    }

    // U�ywamy zaalokowanej pami�ci
    for (int i = 0; i < 5; i++) {
        tablica[i] = i * 10;
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }

    // Zwalniamy pami�� gdy nie jest ju� potrzebna
    free(tablica);

    // Po zwolnieniu pami�ci wska�nik staje si� "wisz�cym wska�nikiem"
    // Dobr� praktyk� jest ustawienie go na NULL
    tablica = NULL;

    return 0;
}
