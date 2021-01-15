n = int(input())
x = 0
y = 0
lowestx = 100
lowesty = 100
highestx = 0
highesty = 0

for i in range(n):
    x, y = input().split(',')
    x = int(x)
    y = int(y)
    lowestx = min(x, lowestx)
    lowesty = min(y, lowesty)
    highestx = max(x, highestx)
    highesty = max(y, highesty)

print(str(lowestx - 1) + "," + str(lowesty - 1))
print(str(highestx + 1) + "," + str(highesty +1))