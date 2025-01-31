#include <stdio.h>
int main() {
    // Integer types
    short signed shortSigned = -123;
    short unsigned shortUnsigned = 123;
    long signed longSigned = -1234567890;
    long unsigned longUnsigned = 1234567890;
    unsigned int hexValue = 0xDEADBEEF;
    unsigned int octValue = 0777;
    // Real types
    float realFloat = 123.456f;
    double realDouble = 1234567.89;
    // Character types
    signed char signedChar = 'A';
    // Printing with format specifiers
    scanf("Short Signed: %hd\n", &shortSigned);
    printf("Short Unsigned: %hu\n", shortUnsigned);
    printf("Long Signed: %ld\n", longSigned);
    printf("Long Unsigned: %lu\n", longUnsigned);
    printf("Hexadecimal: %x\n", hexValue);
    printf("Octal: %o\n", octValue);
    printf("Float: %f\n", realFloat);
    printf("Double: %lf\n", realDouble);
    printf("Signed Character: %c\n", signedChar);
    return 0;
}