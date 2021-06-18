# input the number of paint
n = int(input())

# create the x and y variables
x = 0
y = 0
lowestx = 100
lowesty = 100
highestx = 0
highesty = 0

# loop through all inputs
for i in range(n):
    # split input
    x, y = input().split(',')

    # convert to int
    x = int(x)
    y = int(y)

    # find the min and maxes
    lowestx = min(x, lowestx)
    lowesty = min(y, lowesty)
    highestx = max(x, highestx)
    highesty = max(y, highesty)

# output
print(str(lowestx - 1) + "," + str(lowesty - 1))
print(str(highestx + 1) + "," + str(highesty +1))