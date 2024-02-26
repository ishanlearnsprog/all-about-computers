#include <stdio.h>
#include <stdlib.h>

/*

*****
*****
*****
*****
*****

*/

void pattern1()
{
    int r = 5, c = 5, i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
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
3*****

*/

void pattern2()
{
    int s = 5, i, j;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
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

void pattern3()
{
    int r = 5, i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d", (j + 1));
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

void pattern4()
{
    int s = 5, i, j;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%d", i + 1);
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

void pattern5()
{
    int s = 5, i, j;
    for (i = s; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
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

void pattern6()
{
    int s = 5, i, j;
    for (i = 5; i > 0; i--)
    {
        for (j = 1; j < i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

/*

    *
   ***
  *****
 *******
*********

*/

void pattern7()
{
    int s = 5, i, j, k, l;
    for (i = 0; i < 5; i++)
    {
        for (j = s - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("*");
        }
        for (l = 0; l < i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

*********
 *******
  *****
   ***
    *

*/

void pattern8()
{
    int s = 5, i, j, k, l;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = s - i; k > 0; k--)
        {
            printf("*");
        }
        for (l = s - i - 1; l > 0; l--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

void pattern9()
{
    int s = 5, i, j, k, l;
    for (i = 0; i < 5; i++)
    {
        for (j = s - i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("*");
        }
        for (l = 0; l < i; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < s; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = s - i; k > 0; k--)
        {
            printf("*");
        }
        for (l = s - i - 1; l > 0; l--)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444


00 01 02 03 04 05 06
10 11 12 13 14 15 16
20 21 22 23 24 25 26
30 31 32 33 34 35 36
40 41 42 43 44 45 46
50 51 52 53 54 55 56
60 61 62 63 64 65 66

3 2 1 0 1 2 3
3 2 1 0 1 2 3
3 2 1 0 1 2 3
3 2 1 0 1 2 3
3 2 1 0 1 2 3
3 2 1 0 1 2 3
3 2 1 0 1 2 3

*/

void pattern22()
{
    int s = 4, i, j;
    int total = 2 * s - 1;
    for (i = 0; i < total; i++)
    {
        int r = abs(s - 1 - i);
        for (j = 0; j < total; j++)
        {
            int c = abs(s - j - 1);
            if (c > r)
            {
                printf("%d", c + 1);
            }
            else
            {
                printf("%d", r + 1);
            }
        }
        printf("\n");
    }
}

int main()
{

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

    printf("\nPattern 7\n");
    pattern7();

    printf("\nPattern 8\n");
    pattern8();

    printf("\nPattern 9\n");
    pattern9();

    printf("\nPattern 22\n");
    pattern22();

    return 0;
}
