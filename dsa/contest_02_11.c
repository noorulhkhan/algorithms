/**
 * Q1:NegativeArray
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
#include <stdio.h>
#include <stdlib.h>

int* solve(int *A, int n1, int *len1) {
    int *res = (int*)malloc(n1 * sizeof(int));
    int i, temp, even = 0, odd = 1;
    for (i=0; i<n1; i++){
        temp = A[i];
        if (temp < 0){
            res[even] = temp;
            even += 2;
        } else if (temp > 0) {
            res[odd] = temp;
            odd += 2;
        }
    }
    *len1 = n1;
    return res;
}

int main()
{
    int i, len1, *result;
    int A[] = {1, 2, 3, -7, -2, -3};
    int n1 = 6;
    result = solve(A, n1, &len1);
    for (i=0; i<len1; i++)
        printf("%d ", result[i]);
    return 0;
}
