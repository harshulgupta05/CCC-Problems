#defining the input
inp = open(str(input()))

#checking the overall attempt two
if (
    int(inp.readline()) == (8 or 9) and
    int(inp.readline()) == int(inp.readline()) and
    int(inp.readline()) == (8 or 9) 
    ):
        print("ignore")
else:
    print("answer")