"""
Linear search implementation
"""

def linear_search(list, target):
    """
    serches for the target in the list, if found returns the index, else
    return None.
    """
    for i in range(len(list)): # O(n)
        if list[i] == target: # 0(1)
            return i
    return None


# driver code
def verify(result, target):
    if result:
        print(f"Target {target} found at index:", result)
    else:
        print(f"Target {target} not found!")


if __name__ == "__main__":
    numbers = [i for i in range(1, 11)]
    result = linear_search(numbers, 7)
    verify(result, 7)

    result = linear_search(numbers, 10)
    verify(result, 10)

    result = linear_search(numbers, 2)
    verify(result, 2)

    array = ['peter', 'james', 'john', 'niza']
    result = linear_search(array, 'niza')
    verify(result, 'niza')

    result = linear_search(array, 'judy')
    verify(result, 'judy')