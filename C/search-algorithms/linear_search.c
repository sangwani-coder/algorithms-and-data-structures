#include <stdio.h>
#include "search.h"
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))


/* 
* entry point 
*/
int main (){
    int numbers[11] = {1,2,3,4,5,6,7,8,9, 10};
    int result;

    result = linear_search(numbers, 7);
    verify(result, 7);

    result = linear_search(numbers, 10);
    verify(result, 10);

    result = linear_search(numbers, 2);
    verify(result, 2);

    return 0;
}


/* linear search algorithm
*
*/

int linear_search(int *array, int target) {
    for (int i=0; i < 11; i++){
        if (array[i] == target){
            return i;
        }
    }
    return 0;
}

/*
* verify linear search
*/
void verify(int result, int target){

    if (result){
        printf("Target %d found at index %d \n", target, result);
    }else{
        printf("Target %d not found! \n", target);
    }
}