#include <stdio.h>
#include <math.h>

int main() {
    int num, hundreds, tens, ones, sum;

    printf("Nhập vào một số 3 chữ số: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Số nhập vào không phải là số 3 chữ số.\n");
        return 0; 
    }

    hundreds = num / 100;         
    tens = (num / 10) % 10;      
    ones = num % 10;             

    sum = pow(hundreds, 3) + pow(tens, 3) + pow(ones, 3);

    if (sum == num) {
        printf("%d là số Armstrong.\n", num);  
    } else {
        printf("%d không phải là số Armstrong.\n", num);  
    }

    return 0;
}
