/**
 * Q3:Pretty Number
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
#include <stdio.h>
#include <stdlib.h>

int* solve(int *A, int n1, int *len1) {
    int *res = (int*)malloc(n1 * sizeof(int));
    int i, cnt = 0, f_min = A[0], s_min = __INT_MAX__;
    for (i=1; i<n1; i++){
        if (A[i] < f_min) {
            s_min = f_min;
            f_min = A[i];
        } else if (A[i] < s_min) {
            s_min = A[i];
        }
    }
    for (i=0; i<n1; i++) {
        if(A[i] > s_min){
            res[cnt++] = A[i];
        }
    }
        
    *len1 = cnt;
    return res;
}
int main()
{
    // 5 17 4 12 10 5
    int i, len1, *result;
    int A[] = {17, 4, 12, 10, 5};
    int n1 = 5;
    result = solve(A, n1, &len1);
    for (i=0; i<len1; i++)
        printf("%d ", result[i]);
    return 0;
}
