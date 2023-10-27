"""
Binary search
"""

def binary_search(list, target):
    first = 0
    last = len(list) - 1

    while first <= last:
        middle = (first + last) // 2
        if list[middle] == target:
            return True
        if list[middle] < target:
            first = middle + 1
            # last = len(list[middle:]) - 1
        elif list[middle] > target:
            last = middle - 1
    return None



def verify(result, target):
    if result:
        print(f"Target {target} is present")
    else:
        print(f"Target {target} not found!")


if __name__ == "__main__":
    # driver code
    numbers = [i for i in range(1, 10)]
    result = binary_search(numbers, 7)
    verify(result, 7)

    result = binary_search(numbers, 10)
    verify(result, 10)

    result = binary_search(numbers, 2)
    verify(result, 2)

    array = ['peter', 'james', 'john', 'niza']
    result = binary_search(array, 'niza')
    verify(result, 'niza')

    result = binary_search(array, 'judy')
    verify(result, 'judy')