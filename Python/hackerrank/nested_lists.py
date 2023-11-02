"""
nested list problem
"""
if __name__ == '__main__':
    records = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        
        records.append([name, score])
    # records = [['mabbu', 10.0], ['chika', 30.0], ['pita', 20.0], ['celly', 10.0], ['sepi', 60.0]]
    # output : celly mabbu
    # ['Harry', 37.21], ['Berry', 37.21], ['Tina', 37.2], ['Akriti', 41], ['Harsh', 39]]
    # output: Berry Harry

    scores = []
    names = []

    for i in range(len(records)):
        scores.append(records[i][1])

    sorted_scores = sorted(set(scores))
    
    sec_lowest = sorted_scores[1]

    for i in range(len(records)):
        if records[i][1] == sec_lowest:
            names.append(records[i][0])
    
    sorted_names = sorted(names)

    for i in range(len(sorted_names)):
        print(sorted_names[i])