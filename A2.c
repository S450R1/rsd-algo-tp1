#include <stdio.h>
#include <time.h>

int main() {
    long N;
    int i, p;
    clock_t d, f;
    double t;

    printf("give a number: ");
    scanf("%ld", &N);

    d = clock();

    if (N <= 1) {
        printf("%ld isn't premier\n", N);
        return 0;
    }

    p = 1;
    for (i = 2; i <= N / 2; i++) {
        if (N % i == 0) {
            p = 0;
            break;
        }
    }

    f = clock();
    t = (double)(f - d) / CLOCKS_PER_SEC;

    if (p)
        printf("%ld is premier\n", N);
    else
        printf("%ld isn't premier\n", N);

    printf("time for execution : %f secondes\n", t);

    return 0;
}
