#include <stdio.h>

int largestFactor(long x);

int main(int argc, char const *argv[]) {
    printf("%d\n", largestFactor(600851475143));
    return 0;
}

int largestFactor(long x) {
    long y = x;
    int i = 2;
    int factor = 0;

    while (y > 1) {
        if (y % i == 0) {
            y = y / i;
            if (i > factor) {
                factor = i;
            }
        }
        i++;
    }

    return factor;
}
