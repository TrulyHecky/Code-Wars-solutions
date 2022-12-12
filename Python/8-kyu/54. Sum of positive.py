def positive_sum(array):
    sum = 0
    for num in array:
        if num > 0:
            sum += num
        else:
            continue
    return sum
