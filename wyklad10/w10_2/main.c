#include <stdio.h>
#include <stdlib.h>

int main(){
    double a=1234.8952;

    // Basic floating-point format (%f) - displays with 6 decimal places by default
    // Output: 1234.891200 (note the automatic padding to 6 decimal places)
    printf("%f\n",a);

    // Long float format (%lf) - functionally identical to %f for printf
    // (The 'l' modifier is actually unnecessary for printf, though required for scanf)
    // Output: 1234.891200 (same as %f)
    printf("%lf\n",a);

    // Width and precision (%5.2f) - minimum width of 5 characters, exactly 2 decimal places
    // Width 5 is too small for "1234.89" (7 chars), so it expands as needed
    // Output: 1234.89 (value rounded to 2 decimal places)
    printf("%5.2f\n",a);

    // Width and precision (%3.1f) - minimum width of 3 characters, exactly 1 decimal place
    // Width 3 is too small for "1234.9" (6 chars), so it expands as needed
    // Output: 1234.9 (value rounded to 1 decimal place)
    printf("%3.1f\n",a);

    // Width and precision (%10.3f) - minimum width of 10 characters, exactly 3 decimal places
    // Adds spaces to the left to reach total width of 10
    // Output: "   1234.891" (3 spaces + 7 characters)
    printf("%10.3f\n",a);

    // Sign flag with width and precision (%+10.3f) - forces display of sign (+ or -)
    // Like %10.3f but always shows + for positive numbers
    // Output: "  +1234.891" (2 spaces + plus sign + 7 characters)
    printf("%+10.3f\n",a);

    // Zero-padding with width and precision (%010.2f)
    // Pads with zeros instead of spaces on the left to reach width of 10
    // Output: "0001234.89" (4 leading zeros + 6 characters)
    printf("%010.2f\n",a);

    // Scientific notation with zero-padding (%010.1e)
    // Shows number in form m.pEq where m is mantissa, p is precision, q is exponent
    // lowercase 'e' indicates exponential notation
    // Output: "01.2e+003" (with zero-padding to width of 10)
    printf("%010.1e\n",a);

    // Scientific notation with zero-padding and uppercase E (%010.1E)
    // Same as %e but uses uppercase 'E' for the exponent
    // Output: "01.2E+003" (with zero-padding to width of 10)
    printf("%010.1E\n",a);

    double b=1234e124;

    // Basic floating-point format (%f) for an extremely large number
    // When number is too large for standard notation, defaults to scientific notation
    // Output: inf or scientific notation depending on compiler
    printf("%f\n",b);

    // Long float format (%lf) - same behavior as %f
    // Output: inf or scientific notation
    printf("%lf\n",b);

    // Width and precision (%5.2f) for an extremely large number
    // Width is ignored since the number is so large
    // Output: inf or scientific notation with 2 decimal places
    printf("%5.2f\n",b);

    // Width and precision (%3.1f) for an extremely large number
    // Width is ignored since the number is so large
    // Output: inf or scientific notation with 1 decimal place
    printf("%3.1f\n",b);

    // Width and precision (%10.3f) for an extremely large number
    // Output: right-aligned inf or scientific notation with 3 decimal places
    printf("%10.3f\n",b);

    // Sign flag with width and precision (%+10.3f) for an extremely large number
    // Forces + sign (if positive) with right alignment
    // Output: right-aligned +inf or +scientific notation with 3 decimal places
    printf("%+10.3f\n",b);

    // Zero-padding with width and precision (%010.2f) for an extremely large number
    // Zero padding may not be visible due to the large exponent
    // Output: likely just inf or scientific notation (zero padding may be ignored)
    printf("%010.2f\n",b);

    // Scientific notation (%010.1e) for an extremely large number
    // The most appropriate format for this value, as it's designed for very large numbers
    // Output: zero-padded scientific notation with 1 decimal place
    printf("%010.1e\n",b);

    // Scientific notation with uppercase E (%010.1E)
    // Same as above but with uppercase E
    // Output: zero-padded scientific notation with 1 decimal place and uppercase E
    printf("%010.1E\n",b);

    return 0;
}
