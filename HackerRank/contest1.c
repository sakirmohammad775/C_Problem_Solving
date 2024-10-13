#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, zero = 0, one = 1;

    scanf("%d", &N);
    int arr[N];

    for (int i = 1; i < N; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
    }
    printf("%d %d\n", zero, one);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
