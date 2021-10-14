#include <stdio.h>
int main() {
    float r, area;
    scanf("%f", &r);
    area = 3.14159265358979323846264338327950288 * r * r;
    printf("%.2f\n", area);
    return 0;
}