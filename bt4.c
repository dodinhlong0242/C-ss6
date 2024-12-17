#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);
    printf("Nhập hệ số c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Đây không phải là phương trình bậc 2.\n");
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phương trình có 2 nghiệm phân biệt: x1 = %.2f và x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phương trình có nghiệm kép: x1 = x2 = %.2f\n", x1);
        } else {
            printf("Phương trình vô nghiệm (không có nghiệm thực).\n");
        }
    }

    return 0;
}
