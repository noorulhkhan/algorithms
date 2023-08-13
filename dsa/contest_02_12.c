/**
 * Q2:ConstructBinary
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
#include <stdio.h>

int solve(int A, int B) {
    int i, num = 0;
    for (i=0; i<A; i++){
        num = num | (1<<i);
    }
    num = num << B;
    return num;
}
int solve(int A, int B) {
    int i, num = 0;
    for (i=B; i<(A+B); i++){
        num = num | (1<<i);
    }
    return num;
}
int main()
{
    int a = 3, b = 2, ans;
    ans = solve(a, b);
    printf("%d", ans);
    return 0;
}
