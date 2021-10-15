#include <stdio.h>
int main() {
    char c;
    int letterCount = 0, numberCount = 0, blankCount = 0, otherCount = 0;
    while ((c = getchar()) != '\n') {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {  //英文字母
            letterCount++;
        } else if (c >= 48 && c <= 57) {
            numberCount++;
        } else if (c == 32) {
            blankCount++;
        } else {
            otherCount++;
        }
    }
    printf("%d %d %d %d\n", letterCount, numberCount, blankCount, otherCount);
    return 0;
}