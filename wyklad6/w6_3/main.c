#include <stdio.h>
#include <stdlib.h>

int main() {
    int *tablica = NULL;
    int rozmiar = 0;
    int pojemnosc = 0;

    // Dodajemy liczby do tablicy
    for (int i = 0; i < 10; i++) {
        // Je�li tablica jest pe�na, zwi�kszamy jej pojemno��
        if (rozmiar >= pojemnosc) {
            // Okre�lamy now� pojemno�� (podwajamy, lub ustawiamy na 1 je�li by�a 0)
            int nowa_pojemnosc = pojemnosc == 0 ? 1 : pojemnosc * 2;

            // Realokujemy pami��
            int *nowa_tablica = (int*)realloc(tablica, nowa_pojemnosc * sizeof(int));

            // Sprawdzamy czy realokacja si� powiod�a
            if (nowa_tablica == NULL) {
                printf("B��d realokacji pami�ci\n");
                free(tablica);  // Zwalniamy star� tablic�
                return 1;
            }

            // Aktualizujemy zmienne
            tablica = nowa_tablica;
            pojemnosc = nowa_pojemnosc;
        }

        // Dodajemy nowy element
        tablica[rozmiar++] = i * 10;
    }

    // Wy�wietlamy zawarto�� tablicy
    printf("Zawartosc tablicy (rozmiar=%d, pojemnosc=%d):\n", rozmiar, pojemnosc);
    for (int i = 0; i < rozmiar; i++) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    // Zmniejszamy tablic� do dok�adnego rozmiaru
    tablica = (int*)realloc(tablica, rozmiar * sizeof(int));

    // Zwalniamy pami��
    free(tablica);

    return 0;
}
