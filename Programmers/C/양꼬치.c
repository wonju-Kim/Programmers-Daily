#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int pn = n * 12000;
    int pk = (k - n / 10) * 2000;
    return pn + pk;
}
