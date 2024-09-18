#50412

maxSum = 9 + 9 + 9
array = [0] * 28

for i in range(10):
    for j in range(10):
        for k in range(10):
            array[i + j + k] += 1
count = 0
for index in range(1, maxSum + 1):
    count += array[index] ** 2
print(count)