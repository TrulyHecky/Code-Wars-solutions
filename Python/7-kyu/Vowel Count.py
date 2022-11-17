def get_count (sentence):
    count = 0
    for char in sentence:
        if char in "aeiou":
            count += 1
    return count
