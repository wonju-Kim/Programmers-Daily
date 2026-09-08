#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    for(int i = 0; i <= 1000; i++){
        if(i * i == n){
            return 1;
        }
        if(i * i != n && i * i > n){
            return 2;
        }
    }
}
