def fake_bin(x):
  result = ""
  stringNum = x
  for digit in stringNum:
    if int(digit) >= 5:
      result += "1"
    if int(digit) < 5:
      result += "0"
  return result;
