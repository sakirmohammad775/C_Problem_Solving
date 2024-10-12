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