def nb_dig (n, d):
    values_list = list(range(0, n + 1))
    list_squared = list(map(lambda x: str(x ** 2), values_list))
    str_list_squared = ''.join(list_squared)
    return str_list_squared.count(str(d))
