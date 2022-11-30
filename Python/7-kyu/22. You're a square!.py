import math

def is_square(n):
    return math.sqrt(n) % 1 == 0 if n >= 0 else False
