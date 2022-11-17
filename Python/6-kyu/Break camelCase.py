import re

def solution(s):
    matches = re.finditer('.+?(?:(?<=[a-z])(?=[A-Z])|(?<=[A-Z])(?=[A-Z][a-z])|$)', s)
    return ' '.join([m.group(0) for m in matches])
