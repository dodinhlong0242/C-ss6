#include<stdio.h>

    int main() {
        int numbers[5];
        int sum = 0;
        printf("nhập vào số nguyên:\n");
        for (int i = 0; i < 5; i++) {
            printf("số thứ %d: ", i + 1);
            scanf("%d", &numbers[i]);
        }
        for ( int i = 0; i < 5; i++) {
            if(numbers[i] % 2 != 0) {
                sum += numbers[i];
            }
        }
        printf("tổng các số lẻ là: %d\n", sum);
        return 0;
    }