#include<stdio.h>

    int main() {
        int numbers[5];
        int evenCount = 0, oddCount = 0;
        printf("nhập vào 5 số nguyên:\n");
        for (int i = 0; i < 5; i++) {
            printf("số thứ %d: ",i + 1);
            scanf("%d", &numbers[i]);
        }
        for (int i = 0; i < 5; i++) {
            if(numbers[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            }
            printf("số lượng số chẵn: %d\n", evenCount);
            printf("số lượng số lẻ: %d\n", oddCount);
        return 0;
        }
        