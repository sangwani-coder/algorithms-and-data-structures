import re

if __name__=="__main__":
    S = input()
    k = input()

    ''' S = aaadaa
            012345
        k = aa
        ouput: (0, 1)  
                (1, 2)
                (4, 5)
    '''

    if not re.search(k, S):
        print((-1, -1))
    else:
        itr = 0
        # ensuring to check all possible
        # starting positions for the pattern k
        for i in range(len(S)-len(k)+1):
            res = re.match(k, S[i:])
            if res:
                print((res.start()+itr, res.end()+itr-1))
            itr += 1