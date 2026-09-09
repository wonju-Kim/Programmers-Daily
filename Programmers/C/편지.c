#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* message) {
    int length = 0;
    while(message[length] != '\0'){
        length++;
    }
    return 2 * length;
}
