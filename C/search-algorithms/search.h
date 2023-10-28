#ifndef SEARCH_H
#define SEARCH_H
#define bool int
#define false 0
#define true 1

int arr_length(int arr[]);
int string_arr_length(char arr[]);
int binary_search(int *array, int target);
int linear_search(int *array, int target);
void verify(int result, int target);
void verify_binary(bool result, int target);
void verify_string(int result, char *target);

int linear_search_string(char *array[], char *target);

#endif