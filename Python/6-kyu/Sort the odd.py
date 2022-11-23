def sort_array (source_array):
    odds = iter(sorted(i for i in source_array if i % 2))
    return [next(odds) if i % 2 else i for i in source_array]
