if __name__ == "__main__":

    import re

    pattern1 = r"\s&&\s"
    pattern2 = r"\s\|\|\s"

    N = int(input())
    for _ in range(N):
        txt = input()
        while ' && ' in txt:
            txt = re.sub(pattern1, ' and ', txt)
        while ' || ' in txt:
            txt = re.sub(pattern2, ' or ', txt)

        print(txt)
