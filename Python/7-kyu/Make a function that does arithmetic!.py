def arithmetic (a, b, operator):
    ops = {"add": a + b, "subtract": a - b, "multiply": a * b, "divide": a / b}
    return ops[operator]
