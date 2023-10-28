#include <stdio.h>
#include "search.h"
#include <math.h>

/* 
* entry point 
*/
int main (){
    printf("Iterative Binary Search\n");
    int numbers[11] = {1,2,3,4,5,6,7,8,9, 10};
    bool result;

    int length = arr_length(numbers);
    int low = 0;
    int high = length - 1;

    result = binary_search(numbers, 7, low, high);
    verify_binary(result, 7);

    result = binary_search(numbers, 10, low, high);
    verify_binary(result, 10);

    result = binary_search(numbers, 0, low, high);
    verify_binary(result, 0);

    return 0;
}

/** 
 * binary search algorithm
*/
int binary_search(int *array, int target, int low, int high) {
    int length = arr_length(array);
    int first = 0;
    int last = length - 1;
    int middle;

    while (first <= last){
        middle = floor((first + last) / 2);
        if (array[middle] == target){
            return 1;
        }else if (array[middle] < target)
        {
            first = middle + 1;
        }else
        {
            last = middle -1;
        }
    }
    return 0;
}