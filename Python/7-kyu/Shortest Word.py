def find_short (s):
    l = min(s.split(), key = len)
    return len(l)
