#include <stdio.h>
int main()
{
    long long N;
    long long sum = 0;

    scanf("%lld", &N);
    int A;
    for (int i; i < N; i++)
    {
        scanf("%d", &A);
        sum += A;

    }
    
    printf("%lld\n",llabs(sum));
    return 0;
}
//Question
//Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

// EX : |-5| = 5 , |7| = 7

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (-109  ≤  Ai  ≤  109).

// Output
// Print the absolute summation of these numbers.