n = int(input())
arr = list(map(int, input().split()))

arr.reverse()  # or arr = arr[::-1]

print(*arr)
