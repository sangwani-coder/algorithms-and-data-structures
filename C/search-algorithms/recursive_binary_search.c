#include <stdio.h>
#include "search.h"
#include <math.h>
#include <string.h>

/*
 * entry point
 */
int main()
{
    printf("Recursive Binary Search\n");
    int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bool result;

    int length = arr_length(numbers);
    int low = 0;
    int high = length - 1;

    result = recursive_binary_search(numbers, 7, low, high);
    verify_binary(result, 7);

    result = recursive_binary_search(numbers, 10, low, high);
    verify_binary(result, 10);

    result = recursive_binary_search(numbers, 0, low, high);
    verify_binary(result, 0);

    return 0;
}

/**
 * binary search algorithm
 */
int recursive_binary_search(int array[], int target, int low, int high)
{
    if (low > high) {
        return -1; // Element not found
    }

    int mid = (low + high) / 2;

    if (array[mid] == target) {
        return mid; // Element found at index 'mid'
    } else if (array[mid] > target) {
        return recursive_binary_search(array, target, low, mid - 1); // Search the left half
    } else {
        return recursive_binary_search(array, target, mid + 1, high); // Search the right half
    }
}