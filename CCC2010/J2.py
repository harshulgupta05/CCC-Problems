#defining the input and variables
nikky_forward = int(input())
nikky_backward = int(input())
byron_forward = int(input())
byron_backward = int(input())
stop_time = int(input())
nikky_distance = (nikky_forward * stop_time) + (-nikky_backward * stop_time)
byron_distance = (byron_forward * stop_time) + (-byron_backward * stop_time)

if nikky_distance == byron_distance:
    print("Tied")
elif nikky_distance < byron_distance:
    print("Byron")
elif nikky_distance > byron_distance:
    print("Nikky")

# 12/15