if __name__ == "__main__":
    import re
    S = input()

    # ([a-zA-Z0-9]): captures and groups one alphanumeric value.
    # \1+ : the backreference, accesses the sub-group captured in parentheses,
    # and checks that it repeats one or more times.
    match = re.search(r'([a-zA-Z0-9])\1+', S)
    if match:
        s = match.groups()
        print(s[0])
    else:
        print(-1)