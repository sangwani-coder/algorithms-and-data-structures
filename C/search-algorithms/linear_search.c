#include <stdio.h>
#include "search.h"

/* 
* entry point 
*/
int main (){
    printf("Int array Linear Search\n");
    int numbers[11] = {1,2,3,4,5,6,7,8,9, 10};
    int result;

    result = linear_search(numbers, 7);
    verify(result, 7);

    result = linear_search(numbers, 10);
    verify(result, 10);

    result = linear_search(numbers, 0);
    verify(result, 0);

    return 0;
}

/**
 * linear search algorithm
*/
int linear_search(int *array, int target) {
    int length = arr_length(array);
    for (int i=0; i < length; i++){
        if (array[i] == target){
            return i;
        }
    }
    return 0;
}