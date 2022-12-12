def persistence(num):
    if num < 10:
        return 0
    num_str = str(num)
    total = 1
    for i in num_str:
        total = total * int(i)
    return 1 + persistence(total) 
