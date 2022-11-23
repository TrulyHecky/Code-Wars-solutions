def to_jaden_case (string):
    textArr = string.split(" ")
    jadenCaseArr = []
    for word in textArr:
        jadenCaseArr.append(word.capitalize())
    return " ".join(jadenCaseArr)
