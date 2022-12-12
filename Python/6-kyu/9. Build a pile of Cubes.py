def find_nb(m):
    output = 1
    check = 0
    while check <= m:
        check += output ** 3
        if check == m: return output
        output += 1
    return -1zzx3
