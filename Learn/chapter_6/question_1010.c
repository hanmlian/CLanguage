#include <stdio.h>

int getBonus(int salary) {
    if (salary <= 100000) {
        return salary * 0.1;
    } else if (salary <= 200000) {
        return getBonus(100000) + (salary - 100000) * 0.075;
    } else if (salary <= 400000) {
        return getBonus(200000) + (salary - 200000) * 0.05;
    } else if (salary <= 600000) {
        return getBonus(400000) + (salary - 400000) * 0.03;
    } else if (salary <= 1000000) {
        return getBonus(600000) + (salary - 600000) * 0.015;
    } else {
        return getBonus(1000000) + (salary - 1000000) * 0.01;
    }
}

int main() {
    int salary;
    scanf("%d", &salary);
    printf("%d\n", getBonus(salary));
    return 0;
}