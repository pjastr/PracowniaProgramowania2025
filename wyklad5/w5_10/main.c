#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)malloc(10 * sizeof(int)); // Alokacja pamiêci na 10 liczb typu int

    // Sprawdzenie czy alokacja siê powiod³a
    if (ptr == NULL) {
        printf("B³¹d alokacji pamiêci\n");
        return 1;
    }
    for(int i=0;i<10;i++){
        printf("%d\n", *(ptr+i));
    }

    // U¿ycie zaalokowanej pamiêci
    for (int i = 0; i < 10; i++) {
        ptr[i] = i;
    }

    for(int i=0;i<10;i++){
        printf("%d\n", *(ptr+i));
    }

    // Zwolnienie pamiêci
    free(ptr);

    return 0;
}
