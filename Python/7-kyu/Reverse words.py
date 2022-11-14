def reverse_words (str):
    strList = []
    for word in str.split(' '):
        strList.append(word[::-1])
    return ' '.join(strList)
