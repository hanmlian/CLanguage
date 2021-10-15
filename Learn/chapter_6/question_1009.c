#include <stdio.h>

/**
 * 获取一个整形数字的位数
 */
int numberDigits(int number) {
    int count = 0;
    if (!number)
        return 1;
    while (number) {
        number /= 10;
        count++;
    }
    return count;
}

/**
 * 顺序输出数字的每一位(带上空格，最后一位没有空格)
 */
void printNumber(int number) {
    int digits = numberDigits(number);
    if (!number)
        printf("0");
    for (int i = digits; i > 0; i--) {
        int value = 1;
        for (int j = 0; j < i - 1; j++) {
            value *= 10;
        }
        printf("%d", number / value);
        number %= value;
        if (i > 1) {
            printf(" ");
        }
    }
}

/**
 * 逆序输出整数
 */
void reversePrintNumber(int number) {
    if (!number)
        printf("0");
    while (number) {
        printf("%d", number % 10);
        number /= 10;
    }
}

int main() {
    int number;
    scanf("%d", &number);
    printf("%d\n", numberDigits(number));
    printNumber(number);
    printf("\n");
    reversePrintNumber(number);
    printf("\n");
    return 0;
}