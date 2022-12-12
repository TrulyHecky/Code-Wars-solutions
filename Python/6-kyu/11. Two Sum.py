def two_sum(numbers, target):
    for i, num in enumerate(numbers):
        other_num = target - num
        if other_num in numbers and numbers.index(other_num) != i:
            return [i, numbers.index(target-num)]
