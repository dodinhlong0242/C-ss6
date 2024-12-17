#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "12345"; 
    char enteredPassword[50]; 

    printf("Nhập mật khẩu: ");
    scanf("%49s", enteredPassword);  
    if (strcmp(correctPassword, enteredPassword) == 0) {
        printf("Mật khẩu đúng!\n");
    } else {
        printf("Mật khẩu sai!\n");
    }

    return 0;
}
