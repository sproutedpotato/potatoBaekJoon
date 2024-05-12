def sort(arr):
  for i in range(len(arr) - 1):
    for j in range(i + 1, len(arr)):
      if (arr[i] > arr[j]):
        arr[i], arr[j] = arr[j], arr[i]

  return arr

def getNewaver(score, max_score):
  newAver = score / max_score * 100

  return newAver

a = int(input())

arr = input().split()
score = []
for item in arr:
  score.append(float(item))
sorted_score = sort(score)

sum = 0
for i in range(len(sorted_score)):
  sum += getNewaver(sorted_score[i], sorted_score[len(sorted_score) - 1])

print(sum / a)