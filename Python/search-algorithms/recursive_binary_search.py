"""
Recursive Binary search
"""

def recursive_binary_search(list, target):
    if len(list) == 0:
        return None
    
    middle = (len(list) - 1) //2

    if list[middle] == target:
            return True
    if list[middle] < target:
        return recursive_binary_search(list[middle + 1:], target)
    elif list[middle] > target:
            return recursive_binary_search(list[:middle - 1], target)
    return None



def verify(result, target):
    if result:
        print(f"Target {target} is present")
    else:
        print(f"Target {target} not found!")


if __name__ == "__main__":
    # driver code
    numbers = [i for i in range(1, 10)]
    result = recursive_binary_search(numbers, 7)
    verify(result, 7)

    result = recursive_binary_search(numbers, 10)
    verify(result, 10)

    result = recursive_binary_search(numbers, 2)
    verify(result, 2)

    array = ['peter', 'james', 'john', 'niza']
    result = recursive_binary_search(array, 'niza')
    verify(result, 'niza')

    result = recursive_binary_search(array, 'judy')
    verify(result, 'judy')