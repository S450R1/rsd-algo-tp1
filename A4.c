#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    long N;
    int i, p;
    clock_t d, f;
    double t;

    printf("give a number: ");
    scanf("%ld", &N);

    d = clock();

    if (N == 2) {
        printf("2 est premier\n");
        return 0;
    }
    if (N < 2 || N % 2 == 0) {
        printf("%ld isn't premier\n", N);
        return 0;
    }

    p = 1;
    for (i = 3; i <= sqrt(N); i += 2) {
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

    printf("temps d'execution : %f secondes\n", t);

    return 0;
}
