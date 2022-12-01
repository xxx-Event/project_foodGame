#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double result;
    int i, j;
    int sum = 0;

    start = clock(); //시간 측정 시작

    for (i = 0; i < 100000; i++) {
        for (j = 0; j < 10000; j++) {
            sum += i * j;
        }
    }

    end = clock(); //시간 측정 끝
    result = (double)(end - start);
    printf("%f", result);
    return 0;
}
