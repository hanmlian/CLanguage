#include <stdio.h>
int main(void) {
    int num;
    printf("Please enter three number:\n");
    //scanf的返回值表示成功读取的项目的个数
    int scanfReturnNumber = scanf("%*d %*d %d", &num);
    printf("The last number is %d\n", num);
    printf("The scanf return number is %d\n", scanfReturnNumber);
    return 0;
}