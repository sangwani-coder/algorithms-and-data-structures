#ifndef SEARCH_H
#define SEARCH_H
#define bool int
#define false 0
#define true 1


// Algorithm functions declaration
int recursive_binary_search(int array[], int target, int low, int high);
int linear_search_string(char *array[], char *target);
int binary_search(int *array, int target, int low, int high);
int linear_search(int *array, int target);

// helper functions

int arr_length(int arr[]);
int string_arr_length(char arr[]);

// Verification functions
void verify(int result, int target);
void verify_binary(bool result, int target);
void verify_string(int result, char *target);

#endif