#include <stdio.h>
#include <string.h>
#include <math.h>

int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
 

int main() {
 int i;
 int max;
    printf("\nDay so Fibonacci max = ");
    scanf("%d", &max);
    for (i = 0; i < max; i++) {
        printf("%d ", fibonacci(i));
    }
}