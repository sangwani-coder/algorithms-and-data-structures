#include <stdio.h>
#include "search.h"


/* 
* entry point 
*/
int main (){
    int numbers[11] = {1,2,3,4,5,6,7,8,9, 10};
    int result;

    result = binary_search(numbers, 7);
    verify(result, 7);

    result = binary_search(numbers, 10);
    verify(result, 10);

    result = binary_search(numbers, 0);
    verify(result, 0);

    return 0;
}

/** 
 * binary search algorithm
*/
int binary_search(int *array, int target) {
    // int length = sizeof(array) / sizeof(array[0]);
      int length = arr_length(array);
 
    printf("The length of the array is: %d\n", length);
    return 0;
}