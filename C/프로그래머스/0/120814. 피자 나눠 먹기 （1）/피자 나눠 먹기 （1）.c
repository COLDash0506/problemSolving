#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int pizza_slice = 7;
    if (n%pizza_slice!=0){
        return n/7+1;
    }
    return n/7;
}