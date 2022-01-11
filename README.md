# C - Sorting algorithms & Big O
A sorting algorithm is an algorithm that puts elements of a list into an order. The most frequently used orders
are numerical order and lexicographical order, and either ascending or descending.

### What I learned in this project
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Test Files:
* [tests](./tests): Test files containg files with entry point functions `_main_`, the function for printing an array `print_array()` and for printing a list `print_list()`.

## Header File:

* [sort.h](./sort.h): Header file containing prototypes for all functions written in the project.

## Bubble Sort
### Function implementation

| Prototype  				       | File 				      | Big O notation file |
| ---------------------------------------------|--------------------------------------| --------------------|
| `void bubble_sort(int *array, size_t size);` |[0-bubble_sort.c](./0-bubble_sort.c)|`[0-O](./0-O)`	    |

[Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elemets and swaps them if they are in the wrong order. The through the lsit is repeated until the lsit is sorted. 
### Time complexity:
* Worst-case: __O(n^2)__ Quadratic time
* Average-case: __O(n^2)__ Quadratic time
* Best-case: __O(n)__ Linear time

## Insertion Sort
### Function implementation

| Prototype  				      | File 				   		    | Big O notation file |
| --------------------------------------------|-----------------------------------------------------| --------------------|
|`void insertion_sort_list(listint_t **list);`|[1-insetion_sort_list.c](./1-insertion_sort_list.c)| `[1-O](./1-O)`      |

[Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such quicksort, heapsort, or merge sort.
### Time complexity:
* Worst-case: __O(n^2)__ Quadratic time
* Average-case: __O(n^2)__ Quadratic time
* Best-case: __O(n)__ Linear time

## Selection Sort
### Function implementation
 
| Prototype  				          | File		                        | Big O notation file |
| ------------------------------------------------|---------------------------------------------| --------------------|
|'void selection_sort(int * array, size_t size);' | [2-selection_sort.c](./2-selection_sort.c)  | `[2-O](./2-O)`      |

[Selection sort](https://en.wikipedia.org/wiki/Selection_sort) is an in-place comparison sorting algorithm. It has an O(n^2), which makes it inefficient on large lists, and generally perfomrs worse than the similar insertion sort.
### Time complecity:
* Worst-case: __O(n^2)__ Quadratic time
* Average-case: __O(n^2)__ Quadratic time
* Best-case: __O(n^2)__ Quadratic time

## Quict Sort
### Function implementation

| Prototype  				      | File 				    | Big O notation file |
| --------------------------------------------|-------------------------------------| --------------------|
|'void quick_sort(int * array, size_t size);' | [3-quick_sort.c](./3-quick_sort.c)  | `[3-O](./3-O)`      |

[Quicksort](https://en.wikipedia.org/wiki/Quicksort) is an in-place sorting algorithm. When implemented well, it can be somewhat faster than merge sort and about two or three times faster than heapsort.
### Time complexity:
* Worst-case: __O(n^2)__ Quadratic time
* Average-case: __O(n log n)__ Logarithmic time
* Best-case: __O(n log n)__ Logarithmic time

Author: Sangwani P Zyambo <sangwanizyambo@gmail.com>
