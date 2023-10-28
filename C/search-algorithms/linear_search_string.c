#include <stdio.h>
#include "search.h"


/* 
* entry point 
*/
int main (){
    char *array[] = {"peter", "james", "john", "niza"};

    int result;

    result = linear_search_string(array, "niza");
    verify_string(result, "niza");

    result = linear_search_string(array, "judy");
    verify_string(result, "judy");

    result = linear_search_string(array, "james");
    verify_string(result, "james");

    return 0;
}


/* linear search algorithm. searches for a string.
*
*/

int linear_search_string(char *array[], char *target) {
   
    for (int i = 0; i < 4; i++){
        if (array[i] == target){
            return i;
        }
    }
    return 0;
}


void verify_string(int result, char *target){

    if (result){
        printf("Target %s found at index %d \n", target, result);
    }else{
        printf("Target %s not found!\n", target);
    }
}