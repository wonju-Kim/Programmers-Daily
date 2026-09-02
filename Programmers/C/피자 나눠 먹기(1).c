#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int pizza = n / 7;
    if(n % 7 > 0){
        pizza += 1;
    }
    return pizza;
}
