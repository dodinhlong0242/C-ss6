#include <stdio.h>
#include <math.h>

int main() {
    double initial_amount, interest_rate, final_amount, interest;
    int months;
    printf("Nhập tiền gửi ban đầu: ");
    scanf("%lf", &initial_amount);
    printf("Nhập lãi suất tháng (theo phần trăm): ");
    scanf("%lf", &interest_rate);
    printf("Nhập số tháng gửi: ");
    scanf("%d", &months);
    final_amount = initial_amount;

    for (int i = 0; i < months; i++) {
        final_amount += final_amount * interest_rate / 100; 
    }

    interest = final_amount - initial_amount;
    printf("Tiền lãi: %.3f\n", interest);
    printf("Tiền nhận được: %.3f\n", final_amount);

    return 0;
}
