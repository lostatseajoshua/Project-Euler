#include <stdio.h>

int multiplesOfX(int x);

int main(int argc, char const *argv[]) {
    printf("%d\n", multiplesOfX(1000));

    return 0;
}

int multiplesOfX(int x) {
    int sum = 0;
    for (size_t i = 1; i < x; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
