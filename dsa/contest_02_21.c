/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/**
 * Print all decimal numbers without having consecutive 1's in their binary form in range of 1 to math.pow(2,N).
 * @input N : Integer
 * 
 */
#include <stdio.h>

int checkAlternateBits(int A) {
    while (A > 0) {
        if ((A & 3) == 3 || (A & 3) == 0)
            return 0;
        A >>= 2;
    }
    return 1;
}

void solve(int N) {
    int i, n = (1<<N);
    for (i=1; i<=n; i++){
        if (checkAlternateBits(i)){
            printf("%d ", i);
        }
    }
}

int main() {
  solve(5);
  return 0;
}
