#include <stdio.h>
#include <stdlib.h>

int main(){
    char tekst[15]="informatyka";

    // Basic string format (%s) - displays the entire string as is
    // Output: "informatyka"
    // This is the simplest way to print a string with no special formatting
    printf("%s\n",tekst);

    // Width-specified string format (%20s) - right-aligned within a field of 20 characters
    // Output: "         informatyka"
    // The string "informatyka" is 11 characters long, so 9 spaces are added before it
    // to fill the 20-character field width, creating right alignment
    printf("%20s\n",tekst);

    // Left-aligned string format (%-20s) - left-aligned within a field of 20 characters
    // Output: "informatyka         "
    // The string is printed at the left edge of the 20-character field
    // and 9 spaces are added after it to fill the remaining space
    printf("%-20s\n",tekst);

    // Precision-limited, width-specified string format (%20.5s)
    // The .5 limits the output to the first 5 characters of the string
    // Output: "               infor"
    // Only "infor" (first 5 characters) are printed, right-aligned in a 20-character field
    // This leaves 15 spaces before the truncated string
    printf("%20.5s\n",tekst);

    // Left-aligned, precision-limited string format (%-20.5s)
    // Combines left alignment with precision limiting
    // Output: "infor               "
    // Only the first 5 characters "infor" are printed, left-aligned in a 20-character field
    // This leaves 15 spaces after the truncated string
    printf("%-20.5s\n",tekst);

    return 0;
}
