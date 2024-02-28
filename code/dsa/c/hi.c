#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_LIB_SIZE 10

// C Basics -- Start

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

// C Basics -- End

// Structs, Unions & Pointers - Jacob Sorber Example -- START

typedef struct {
    char *name;
    bool is_robot;
    union {
        char *personality;
        int firmware_version;
    };
} charachter;

void print_charachter(charachter* c) {
    printf("Charachter: %s\n", c->name);
    if (c->is_robot) {
        printf("Version: %i\n", c->firmware_version);
    } else {
        printf("Personality: %s\n", c->personality);
    }
    printf("\n");
}

void create_charachter() {
    charachter hansolo;
    charachter r2d2;
    
    hansolo.name = "Han Solo";
    hansolo.is_robot = false;
    hansolo.personality = "Scruffy-looking Nerfherder";
    
    r2d2.name = "R2";
    r2d2.is_robot = true;
    r2d2.firmware_version = 42;

    print_charachter(&hansolo);
    print_charachter(&r2d2);
}

// Structs, Unions & Pointers - Jacob Sorber Example -- END

int main() {
    // primary_data_types();
    create_charachter();
    return 0;
}