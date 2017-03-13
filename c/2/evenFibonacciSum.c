#include <stdio.h>
#include <stdbool.h>

int fibonacci(int x);
int sumEvenFibonacci();

int main(int argc, char const *argv[]) {
    printf("%d\n", sumEvenFibonacci());
    return 0;
}

int fibonacci(int n) {
    if (n == 0) { return 0; }
    if (n == 1) { return 1; }
    printf("%d\n", n);
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumEvenFibonacci() {
    int sum = 0;
    int x = 1;
    int y = 2;
    while(x < 4000000) {
        if (x % 2 == 0) {
            sum += x;
        }
		int z = x + y;
		x = y;
		y = z;
    }
    return sum;
}
