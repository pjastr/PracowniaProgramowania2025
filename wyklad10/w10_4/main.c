#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=123;

    // %x format specifier - prints the integer in lowercase hexadecimal notation
    // The decimal value 123 is converted to hexadecimal, which is 7b
    // This format is commonly used for displaying memory addresses or color values
    printf("%x\n",a);

    // %X format specifier - prints the integer in UPPERCASE hexadecimal notation
    // Same as %x but uses capital letters (A-F instead of a-f) for hex digits
    // The decimal value 123 is displayed as 7B instead of 7b
    printf("%X\n",a);

    // %#x format specifier - the # is the "alternate form" flag
    // For hexadecimal format, this adds the "0x" prefix to indicate hexadecimal notation
    // Output will be "0x7b" - making it explicitly clear this is a hexadecimal value
    // This is especially useful when displaying values that could be misinterpreted
    printf("%#x\n",a);

    float b=51233;

    // %.0f format specifier - floating point with precision set to 0 decimal places
    // The .0 indicates no digits should be shown after the decimal point
    // The float will be rounded to the nearest integer and displayed without a decimal point
    // Output will be "51233" (no decimal point)
    printf("%.0f\n",b);

    // %#.0f format specifier - the # (alternate form) flag with 0 decimal precision
    // For floating point formats, the # ensures the decimal point is always printed
    // Even though we specified 0 decimal places, the decimal point will still appear
    // Output will be "51233." (note the decimal point at the end)
    // This makes it clear that the value is a floating point number, not an integer
    printf("%#.0f\n",b);

    return 0;
}
