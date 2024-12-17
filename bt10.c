#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;

    printf("Nh?p vào m?t s? nguyên: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d là s? nguyên t?.\n", num);
    } else {
        printf("%d không ph?i là s? nguyên t?.\n", num);
    }

    return 0;
}

