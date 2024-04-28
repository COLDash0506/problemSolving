#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
static int temp;
int solution(int array[], size_t array_len) {
    int answer = 0;
    // 버블 정렬 implemantation
    for(int i = 0; i < array_len-1; ++i){
        for(int j = 0; j < array_len-i-1; ++j){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    // 중앙값 인덱스 -> answer
    answer = array[array_len/2];
    return answer;
}