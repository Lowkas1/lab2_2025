#include <stdio.h>

int main() {
    // Convert char to decimal
    char ch = 'A';
    int decimalValue = (int)ch;
    printf("Character: %c, Decimal Value: %d\n", ch, decimalValue);

    // Convert decimal to char
    decimalValue = 66; // ASCII value for 'B'
    ch = (char)decimalValue;
    printf("Decimal Value: %d, Character: %c\n", decimalValue, ch);

    return 0;
}