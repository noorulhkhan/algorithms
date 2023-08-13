/**
 * Q2: Find the sum of numbers which are greater than their adjacent left number.
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int solve(int* A, int n1) {
    long i, sum;
    for (i=0; i<n1-1; i++) {
        if (A[i]<A[i+1]){
            sum += A[i+1] % 1000000007;
        }
    }
    return sum % 1000000007;
}
