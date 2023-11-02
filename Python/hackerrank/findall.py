import re


if __name__ == "__main__":
    S = input()
    # QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm.
    # S1 = "rabcdeefgyYhFjkIoomnpOeorteeeeet",
    # outputs: ee, Ioo, Oeo, eeeee 
    # S2 = "match a single character not present in the list below"
    # outputs: -1
    # string: abaabaabaabaae
    # outputs: aa, aa, aa
    pattern = r'(?<=[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm])[aeiouAEIOU][aeiouAEIOU]+(?=[QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm])'

    if re.search(pattern, S) is not None:
        for m in  map(lambda x: x.group(), re.finditer(pattern, S)):
            print(m)
    else:
        print(-1)