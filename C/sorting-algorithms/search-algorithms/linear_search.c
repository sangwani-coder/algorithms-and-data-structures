#include <stdio.h>
#include "search.h"


/* 
* entry point 
*/
int main (){
    int numbers[10] = {1,2,3,4,5,6,7,8,9};
    char *array[] = {"peter", "james", "john", "niza"};

    int result;


    result = linear_search(numbers, 7);
    verify(result);

    result = linear_search(numbers, 10);
    verify(result);

    result = linear_search(numbers, 2);
    verify(result);

    result = linear_search(array, "niza");
    verify(result);

    result = linear_search(array, "judy");
    verify(result);

    return 0;
}


/* linear search algorithm
*
*/

int linear_search(int *array, int target) {
    for (int i=0; i < 10; i++){
        if (array[i] == target){
            return i;
        }else {
            return NULL;
        }
    }
    return 0;
}



void verify(int result){

    if (result){
        printf("Target found at index %d \n", result);
    }else{
        printf("Target not found!");
    }
}