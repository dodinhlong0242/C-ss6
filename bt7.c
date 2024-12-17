#include <stdio.h>

int main() {
    int n;

    printf("Nhập một số nguyên: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương.\n");
        return 1;
    }

    printf("Các ước của số %d là: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
