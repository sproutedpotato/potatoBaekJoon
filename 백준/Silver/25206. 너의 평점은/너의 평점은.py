sum_grade = 0
total = 0
for i in range(20):
  dept, grade, score = input().split()
  grade = float(grade)

  if score == "A+":
    total += grade * 4.5
    sum_grade += grade

  elif score == "A0":
    total += grade * 4.0
    sum_grade += grade

  elif score == "B+":
    total += grade * 3.5
    sum_grade += grade

  elif score == "B0":
    total += grade * 3.0
    sum_grade += grade

  elif score == "C+":
    total += grade * 2.5
    sum_grade += grade

  elif score == "C0":
    total += grade * 2.0
    sum_grade += grade

  elif score == "D+":
    total += grade * 1.5
    sum_grade += grade

  elif score == "D0":
    total += grade * 1.0
    sum_grade += grade

  elif score == "F":
    total += grade * 0
    sum_grade += grade

print(total / sum_grade)