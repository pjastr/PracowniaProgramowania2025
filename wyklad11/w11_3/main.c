#include <stdio.h>

// Funkcja porównująca dwa napisy leksykograficznie
int lexComp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1; // str1 jest później w porządku leksykograficznym niż str2
        }
        if (str1[i] < str2[i]) {
            return 0; // str1 jest wcześniej w porządku leksykograficznym niż str2
        }
        i++;
    }

    // Jeśli wszystkie odpowiadające sobie znaki są takie same, ale napisy mają różną długość
    if (str1[i] == '\0' && str2[i] != '\0') {
        return 0; // str1 jest krótszy, więc wcześniej leksykograficznie
    }
    if (str1[i] != '\0' && str2[i] == '\0') {
        return 1; // str2 jest krótszy, więc str1 jest później leksykograficznie
    }

    return 0; // Napisy są identyczne
}

int main() {
    char str1[] = "abc";
    char str2[] = "abcd";
    char str3[] = "abC";
    char str4[] = "abc";

    printf("Porownanie '%s' i '%s': %d\n", str1, str2, lexComp(str1, str2)); // Powinno zwrócić 0
    printf("Porownanie '%s' i '%s': %d\n", str1, str3, lexComp(str1, str3)); // Powinno zwrócić 1
    printf("Porownanie '%s' i '%s': %d\n", str1, str4, lexComp(str1, str4)); // Powinno zwrócić 0

    return 0;
}
