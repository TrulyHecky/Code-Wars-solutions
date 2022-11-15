def abbrev_name (name):
    output = name[0]
    for i in range (1, len(name)):
        if name[i - 1] == " ":
            output += name[i]
            output = output.upper()
    return '.'.join(output)
