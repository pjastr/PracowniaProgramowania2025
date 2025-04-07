#include <stdio.h>
#include <stdlib.h>

int main() {
    int *tablica = NULL;
    int rozmiar = 0;
    int pojemnosc = 0;

    // Dodajemy liczby do tablicy
    for (int i = 0; i < 10; i++) {
        // Jeœli tablica jest pe³na, zwiêkszamy jej pojemnoœæ
        if (rozmiar >= pojemnosc) {
            // Okreœlamy now¹ pojemnoœæ (podwajamy, lub ustawiamy na 1 jeœli by³a 0)
            int nowa_pojemnosc = pojemnosc == 0 ? 1 : pojemnosc * 2;

            // Realokujemy pamiêæ
            int *nowa_tablica = (int*)realloc(tablica, nowa_pojemnosc * sizeof(int));

            // Sprawdzamy czy realokacja siê powiod³a
            if (nowa_tablica == NULL) {
                printf("B³¹d realokacji pamiêci\n");
                free(tablica);  // Zwalniamy star¹ tablicê
                return 1;
            }

            // Aktualizujemy zmienne
            tablica = nowa_tablica;
            pojemnosc = nowa_pojemnosc;
        }

        // Dodajemy nowy element
        tablica[rozmiar++] = i * 10;
    }

    // Wyœwietlamy zawartoœæ tablicy
    printf("Zawartosc tablicy (rozmiar=%d, pojemnosc=%d):\n", rozmiar, pojemnosc);
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    // Zmniejszamy tablicê do dok³adnego rozmiaru
    tablica = (int*)realloc(tablica, rozmiar * sizeof(int));

    // Zwalniamy pamiêæ
    free(tablica);

    return 0;
}
