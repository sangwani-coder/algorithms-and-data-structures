#ifndef SEARCH_H
#define SEARCH_H

int linear_search(int *array, int target);
void verify(int result, int target);
void verify_string(int result, char *target);

int linear_search_string(char *array[], char *target);

#endif