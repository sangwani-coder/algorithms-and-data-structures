#include <stdio.h>
#include "search.h"


/* 
* entry point 
*/
int main (){
    printf("String Linear Search\n");

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


/* linear search algorithm to searches for a string.
*
*/
int linear_search_string(char *array[], char *target) {
    int length = string_arr_length(*array);
   
    for (int i = 0; i < length; i++){
        if (array[i] == target){
            return i;
        }
    }
    return 0;
}