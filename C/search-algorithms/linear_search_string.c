#include <stdio.h>
#include "search.h"


/* 
* entry point 
*/
int main (){
    char *array[] = {"peter", "james", "john", "niza"};

    char *result;

    result = linear_search_string(array, "niza");
    verify(result);

    result = linear_search_string(array, "judy");
    verify(result);

    return 0;
}


/* linear search algorithm
*
*/

char linear_search_string(char *array, char *target) {
    for (int i=0; i < 10; i++){
        if (array[i] == target){
            return i;
        }
    }
    return "Not found";
}


void verify(char *result){

    if (result){
        printf("Target found at index %s \n", result);
    }else{
        printf("Target not found!");
    }
}