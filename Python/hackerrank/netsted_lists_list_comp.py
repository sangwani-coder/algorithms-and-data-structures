"""
nested list problem using list comprehension
"""
if __name__ == '__main__':
    records = []

    for _ in range(int(input())):
        name = input()
        score = float(input())

        records.append([name, score])
    # Step 2: Find the second lowest grade
    grades = [student[1] for student in records]
    sorted_grades = sorted(set(grades))  # Sorting and removing duplicates
    # The second element is the second lowest grade
    second_lowest_grade = sorted_grades[1]

    # Step 3: Find records with the second lowest grade
    students_with_second_lowest_grade = [
        student[0] for student in records if student[1] == second_lowest_grade]

    # Step 4: Sort the names alphabetically
    students_with_second_lowest_grade.sort()

    # Step 5: Print the sorted names
    for student in students_with_second_lowest_grade:
        print(student)
