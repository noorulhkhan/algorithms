/**
 * Q3: Check whether a specific integer exists in array whose all greater numbers count equals that integer? 
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
#include <stdio.h>
#include <stdlib.h>

int comparator(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int solve2(int* A, int n1) {
    int i, num, count;
    qsort(A, n1, sizeof(int), comparator);
    for (i=0; i<n1; i++) {
        if (A[i]==n1-i-1){
            printf("(%d)%d == %d\n", i, A[i], n1-i-1);
            return 1;
        }
    }
    return -1;
    
}
int solve(int* A, int n1) {
    int i, j, count;
    for (i=0; i<n1; i++) {
        count = 0;
        for (j=0; j<n1; j++) {
            if (i==j){
                continue;
            } else if (A[j]>A[i]){
                count++;
            }
        }
        if(A[i] == count){
            return 1;
        }
    }
    return -1;
}
int main()
{
    // int A[] = {3, 2, 1, 3};
    int A[] = {3, 1, 1, 3};
    int n1 = 4;
    int r = solve2(A, n1);
    printf("ans %d", r);

    return 0;
}
