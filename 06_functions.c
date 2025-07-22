#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    int result = add(x, y);
    printf("Sum = %d\n", result);
    return 0;
}
