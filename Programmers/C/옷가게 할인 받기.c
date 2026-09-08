#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    if(price < 500000){
        if(price < 300000){
            if(price < 100000){
                return price;
            }
            else{
                return price * 95 / 100;
            }
        }
        else{
            return price * 90 / 100;
        }
    }
    else{
        return price * 80 / 100;
    }
}
