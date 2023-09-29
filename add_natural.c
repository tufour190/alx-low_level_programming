#include <stdio.h>

int main() {
    int n = 10;
    int x = 1;
    int sum = 0;
    for (x = 1; x <= n; x++) {
        sum = sum + x;
    }
    printf("sum is: %d\n", sum);
    return 0;
}
