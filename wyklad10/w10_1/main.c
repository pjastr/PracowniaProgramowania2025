#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=442;

    // Basic decimal integer format (%d) - prints the number as is
    printf("%d\n",a);

    // Space flag (% d) - adds a space before positive numbers (for alignment with negative numbers)
    printf("% d\n",a);

    // Width specification (%2d) - minimum field width of 2 characters (right-aligned)
    // Since 442 is 3 digits, the width has no effect here
    printf("%2d\n",a);

    // Width specification (%7d) - minimum field width of 7 characters (right-aligned)
    // Will pad with spaces on the left to reach 7 characters total
    printf("%7d\n",a);

    // Precision with width (%7.2d) - minimum field width of 7, at least 2 digits
    // The .2 means at least 2 digits, but since 442 already has 3 digits, it has no effect
    printf("%7.2d\n",a);

    // Zero-padding with width (%07d) - minimum field width of 7, padded with zeros on the left
    printf("%07d\n",a);

    // Zero-padding with width and precision (%07.2d) - minimum width of 7, at least 2 digits
    // Zero-padding still applies, but the precision has no effect since 442 already has 3 digits
    printf("%07.2d\n",a);

    // Left-justify flag (%-8d) - minimum field width of 8, left-aligned
    // Will pad with spaces on the right to reach 8 characters total
    printf("%-8d.\n",a);

    int b=-345;

    // Basic decimal integer format (%d) - prints the number as is
    printf("%d\n",b);

    // Space flag (% d) - adds a space before positive numbers
    // Has no effect on negative numbers since they already have a - sign
    printf("% d\n",b);

    // Width specification (%2d) - minimum field width of 2 characters (right-aligned)
    // Since -345 is 4 characters (including the minus sign), the width has no effect
    printf("%2d\n",b);

    // Width specification (%7d) - minimum field width of 7 characters (right-aligned)
    // Will pad with spaces on the left to reach 7 characters total
    printf("%7d\n",b);

    // Precision with width (%7.2d) - minimum field width of 7, at least 2 digits
    // The .2 has no effect since 345 already has 3 digits
    printf("%7.2d\n",b);

    // Zero-padding with width (%07d) - minimum field width of 7, padded with zeros
    // For negative numbers, the minus sign appears first, then zero padding
    printf("%07d\n",b);

    // Zero-padding with width and precision (%07.2d) - minimum width of 7, at least 2 digits
    // Zero-padding applies, but precision has no effect since 345 already has 3 digits
    printf("%07.2d\n",b);

    // Left-justify flag (%-8d) - minimum field width of 8, left-aligned
    // Will pad with spaces on the right to reach 8 characters total
    printf("%-8d\n",b);

    int c=7;

    // Basic decimal integer format (%d) - prints the number as is
    printf("%d\n",c);

    // Space flag (% d) - adds a space before positive numbers
    // Since 7 is positive, a space is added before it
    printf("% d\n",c);

    // Width specification (%2d) - minimum field width of 2 characters (right-aligned)
    // Since 7 is 1 digit, it will be padded with one space on the left
    printf("%2d\n",c);

    // Width specification (%7d) - minimum field width of 7 characters (right-aligned)
    // Will pad with 6 spaces on the left to reach 7 characters total
    printf("%7d\n",c);

    // Precision with width (%7.2d) - minimum field width of 7, at least 2 digits
    // The .2 means the number will be padded with a leading zero to reach 2 digits (07)
    // Then spaces are added to reach the total width of 7
    printf("%7.2d\n",c);

    // Zero-padding with width (%07d) - minimum field width of 7, padded with zeros
    // Will pad with 6 zeros on the left to reach 7 characters total
    printf("%07d\n",c);

    // Zero-padding with width and precision (%07.2d) - minimum width of 7, at least 2 digits
    // The .2 forces at least 2 digits (07), then zeros are added to reach width of 7
    printf("%07.2d\n",c);

    // Left-justify flag (%-8d) - minimum field width of 8, left-aligned
    // Will pad with 7 spaces on the right to reach 8 characters total
    printf("%-8d\n",c);

    return 0;
}
