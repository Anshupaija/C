#include <stdio.h>

int main() {
    int num = 10;
    int K = 3;    
    int total_sum = 0;
    
    for (int i = 1; i <= num; i++) {
        if (i % K == 0) {
            total_sum += i;
        }
    }
    
    printf("Sum of numbers divisible by %d in the range 1 to %d is: %d\n", K, num, total_sum);
    
    return 0;
}
