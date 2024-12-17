#include <stdio.h>

const char* getZodiacSign(int day, int month) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return "Bach duong";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return "Kim Nguu";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        return "Song tu";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        return "Cu Giai";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "Su Tu";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "Xu Nu ";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return "Thi�n B�nh";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return "Ho C�p";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return "Nh�n M� ";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return "Ma Ket";
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "Bao Binh";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "Song Ngu";
    }
    return "Ng�y hoac th�ng kh�ng hop le?!";
}

int main() {
    int day, month;
    printf("Nhap v�o ng�y sinh: ");
    scanf("%d", &day);
    printf("Nh?p v�o th�ng sinh: ");
    scanf("%d", &month);

    const char* zodiac = getZodiacSign(day, month);
    printf("Cung ho�ng dao cua ban l�: %s\n", zodiac);

    return 0;
}

