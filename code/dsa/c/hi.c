#include <stdio.h>
#include <limits.h>

/*

basic arithmetic types: char, int, float, double
modifiers: signed, unsigned, long, short

integer format specifiers
decimal : %d
octal : %o
hexadecimal : %x

*/

void primary_data_types() {
    char c = 'a';
    signed char sc = 'a';
    unsigned char uc = 'a';

    short sn = 1; // short int , signed short, signed short int
    unsigned short usn = 1; // unsigned short int


    printf("Primary Data Types\n\n");
    printf("Char (%%c): %c\nSizeof (in bytes): %llu\nMinimum: %i\nMAXIMUM: %i\n\n", c, sizeof(c), CHAR_MIN, CHAR_MAX);
    printf("Unsigned Char (%%c): %c\nUnsigned Char (%%hhu): %hhi\nSizeof (in bytes): %llu\nMinimum: %i\nMAXIMUM: %i\n\n", uc, uc, sizeof(uc), 0, UCHAR_MAX);
    printf("Signed Char (%%c): %c\nSigned Char (%%hhi): %hhi\nSizeof (in bytes): %llu\nMinimum: %i\nMAXIMUM: %i\n\n", sc, sc, sizeof(sc), SCHAR_MIN, SCHAR_MAX);

    printf("Short (%%hi): %hi\nSizeof (in bytes): %llu\nMinimum: %i\nMaximum: %i\n\n", sn, sizeof(sn), SHRT_MIN, SHRT_MAX); 
    printf("Unsigned Short (%%hu): %hi\nSizeof (in bytes): %llu\nMinimum: %i\nMaximum: %i\n\n", usn, sizeof(usn), 0, USHRT_MAX);

}

int main() {
    primary_data_types();
    return 0;
}