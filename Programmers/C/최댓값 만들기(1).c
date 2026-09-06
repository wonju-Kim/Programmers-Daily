#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    int max_value = 0;
    for(size_t i = 0; i < numbers_len; i++){
        for(size_t j = i + 1; j < numbers_len; j++){
            int product = numbers[i] * numbers[j];
            if(product > max_value){
                max_value = product;
            }
        }
    }
    return max_value;
}
