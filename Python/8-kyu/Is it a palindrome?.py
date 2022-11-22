def is_palindrome (s):
    return True if s.lower() == s.lower()[::-1] else False 
