/**
 * Q1: Check whether alternate bits are set or not?
 * @input A : Integer
 * 
 * @Output Integer
 */
#include <stdio.h>

int checkAlternateBits(unsigned int A) {
    while (A > 0) {
        if ((A & 3) == 3 || (A & 3) == 0)
            return 0;
        A >>= 2;
    }
    return 1;
}

int main()
{
    unsigned int A = 10;
    if (checkAlternateBits(A))
        printf("Alternate bits are set\n");
    else
        printf("Alternate bits are not set\n");
    return 0;
}
