// Live demo of 1D loops
// Anosua Roy z5264396
// 2022-3-1

#include <stdio.h>

#define DIVISOR 7

int main(void) {
    int start;
    printf("Enter start num: ");
    scanf("%d", &start);
    
    int finish;
    printf("Enter finish num: ");
    scanf("%d", &finish);
    
    int count = start;
    while (count <= finish) {
        if (count % DIVISOR == 0) {
            printf("%d\n", count);
        }
        count++;
    }
    
    return 0;
}
