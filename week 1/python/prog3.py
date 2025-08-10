arr = [1, 8, 3, 7, 5]
first = second = float('-inf')

for num in arr:
    if num > first:
        second = first
        first = num
    elif first > num > second:
        second = num

if second == float('-inf'):
    print(-1)  # second largest doesn't exist
else:
    print(second)
