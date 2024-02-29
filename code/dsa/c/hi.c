#include "basics.h"
#include <stdio.h>

// pointers array representation -- start

void sq_a(unsigned int *a, unsigned int l) {
    for (unsigned int i = 0; i < l; i++) {
        *(a+i) = *(a+i) * *(a+i);
        printf("%u ", *(a+i));
    }
}

void pointers() {
    unsigned int i = 0;
    unsigned int a[] = {1, 2, 3, 4, 5};
    unsigned int l = sizeof(a)/sizeof(a[0]);
    for (i = 0; i < l; i++) {
        printf("%u ", a[i]);
    }
    sq_a(a, l);
}

// pointers array representation -- end

int main() {
    // primary_data_types();
    // create_charachter();

    pointers();
    return 0;
}