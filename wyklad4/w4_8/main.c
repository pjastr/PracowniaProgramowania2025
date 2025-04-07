#include <stdio.h>
int main() {
    int num = -120345, temp, divisor = 1, digit;
    if(num < 0) num = -num;
    temp = num;
    while(temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    while(divisor > 0) {
        digit = num / divisor;
        printf("%d ", digit);
        num %= divisor;
        divisor /= 10;
    }
    return 0;
}
