#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declare and initialize a float variable with value 4.5
    float b=4.5;

    // %a - Print float in hexadecimal notation with lowercase letters (0x1.2p+2 format)
    printf("%a\n",b);
    // %A - Print float in hexadecimal notation with uppercase letters (0X1.2P+2 format)
    printf("%A\n",b);

    // Declare and initialize an integer with value 87
    int a=87;
    // Declare and initialize a character with value 'r'
    char c='r';

    // %c - Print as characters: 87 will be converted to its ASCII equivalent 'W', and 'r' remains 'r'
    printf("%c %c\n",a,c);
    // %d - Print integer in standard decimal format
    printf("%d\n",a);

    // %e - Print float in scientific notation with lowercase 'e' (4.500000e+00)
    printf("%e\n",b);
    // %E - Print float in scientific notation with uppercase 'E' (4.500000E+00)
    printf("%E\n",b);
    // %f - Print float in decimal notation with 6 decimal places by default (4.500000)
    printf("%f\n",b);

    // Declare and initialize a very small float value (scientific notation territory)
    float d=0.00000123;
    // Declare and initialize another float value
    float e=2.3;

    // %g - Print float using the shorter of %e or %f format (lowercase)
    // Small values like d use scientific notation, normal values like e use decimal
    printf("%g %g\n",d,e);
    // %G - Print float using the shorter of %E or %F format (uppercase)
    printf("%G %G\n",d,e);

    // %i - Print integer in decimal format (functionally identical to %d)
    printf("%i\n",a);
    // %o - Print integer in octal (base-8) format
    printf("%o\n",a);
    // %p - Print memory address (pointer) of variable a in hexadecimal
    printf("%p\n",&a);

    // Declare and initialize a character array (string) with "qwerty"
    char f[10]="qwerty";
    // %s - Print null-terminated string
    printf("%s\n",f);

    // %u - Print integer as unsigned decimal (for positive values, output is same as %d)
    printf("%u\n",a);

    // Declare and initialize a negative integer
    int g=-5;
    // %u - Print negative integer as unsigned, showing how negative values appear as large positive values
    printf("%u\n",g);

    // %x - Print integer in hexadecimal format with lowercase letters
    printf("%x",a);
    // %X - Print integer in hexadecimal format with uppercase letters
    printf("%X",a);

    return 0;
}
