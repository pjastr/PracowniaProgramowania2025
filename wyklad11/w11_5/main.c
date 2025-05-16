#include <stdio.h>

void strCopyNew(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Dodaj znak końca napisu do tablicy docelowej
}

int main() {
    char src[] = "Testowy napis";
    char dest[100]; // Zakładamy, że jest wystarczająco dużo miejsca

    strCopyNew(src, dest);

    printf("zrodlo: %s\n", src);
    printf("cel: %s\n", dest);

    return 0;
}
