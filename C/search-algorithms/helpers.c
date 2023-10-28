#include <stdio.h>
#include "search.h"

/**
 * calculates the length of the array
*/
int arr_length(int arr[])
{
    int i;
    int count = 0;
    for(i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

/**
 * calculates the length of the string array
*/
int string_arr_length(char arr[])
{
    int i;
    int count = 0;
    for(i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

/*
* prints the result of the int search agorithm
*/
void verify(int result, int target){

    if (result){
        printf("Target %d found at index %d \n", target, result);
    }else{
        printf("Target %d not found! \n", target);
    }
}

/**
 * prints the result of the string search algorithm.
*/
void verify_string(int result, char *target){

    if (result){
        printf("Target %s found at index %d \n", target, result);
    }else{
        printf("Target %s not found!\n", target);
    }
}

/**
 * prints the result of the string search algorithm.
*/
void verify_binary(bool result, int target){

    if (result){
        printf("Target %d found\n", target);
    }else{
        printf("Target %d not found!\n", target);
    }
}