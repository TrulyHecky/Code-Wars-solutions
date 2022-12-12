def positive_sum(arr):
    sum = 0
    for num in arr:
        if num > 0:
            sum += num
        else:
            continue
    return sum
