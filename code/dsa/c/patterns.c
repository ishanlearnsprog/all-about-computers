#include<stdio.h>

/*

*****
*****
*****
*****
*****

*/

void pattern1() {
    int r = 5, c = 5, i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < r; j++) {
            printf("%c", '*');
        }
        printf("\n");
    }
}

/*

*
**
***
****
*****

*/

void pattern2() {
    int s = 5, i, j;
    for(i = 0; i < s; i++) {
        for(j = 0; j < i+1; j++) {
            printf("%c", '*');
        }
        printf("\n");
    }
}

/*

1
12
123
1234
12345

*/

void pattern3() {
    int r = 5, i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < i+1; j++) {
            printf("%d", (j+1));
        }
        printf("\n");
    } 
}


/*

1
22
333
4444
55555

*/

void pattern4() {
    int s = 5, i, j;
    for(i = 0; i < s; i++) {
        for(j = 0; j < i+1; j++) {
            printf("%d", i+1);
        }
        printf("\n");
    }
}

/*

*****
****
***
**
*

*/

void pattern5() {
    int s = 5, i, j;
    for(i = s; i > 0; i--) {
        for(j = 0; j < i; j++) {
            printf("%c", '*');
        }
        printf("\n");
    }
}

/*

12345
1234
123
12
1

*/

void pattern6() {
    int s = 5, i, j;
    for(i = 5; i > 0; i--) {
        for(j = 1; j < i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {

    printf("\nPattern 1\n");
    pattern1();

    printf("\nPattern 2\n");
    pattern2();

    printf("\nPattern 3\n");
    pattern3();

    printf("\nPattern 4\n");
    pattern4();

    printf("\nPattern 5\n");
    pattern5();

    printf("\nPattern 6\n");
    pattern6();
    
    return 0;
}
