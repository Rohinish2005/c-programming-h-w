
#include <stdio.h>
int isHappy(int n) {
    int digit, sum = 0;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    printf("Two-digit Happy Numbers:\n");
    for (int i = 10; i <= 99; i++) {
        int num = i;
        int result = num;
        // Check for a cycle or reach 1 (happy) or 4 (unhappy) for two-digit numbers
        while (result != 1 && result != 4) {
            result = isHappy(result);
        }
        if (result == 1) {
            printf("%d\n", num);
        }
    }
    return 0;
}

