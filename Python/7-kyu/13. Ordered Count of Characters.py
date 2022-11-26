def ordered_count (inp):
    return [(i, inp.count(i)) for i in sorted(set(inp), key = inp.index)]
