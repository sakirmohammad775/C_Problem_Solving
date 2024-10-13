#include <stdio.h>

int main() {
    int N, X,position;
    scanf("%d", &N);

    int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);
    
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            position = i;
            break;        
        }
        else{
            position = -1;
        }
    }
    printf("%d\n", position);
    
    return 0;
}
