# This is originally a popular leetcode problem
# We are going to use stack data structure (soo similar to valid parentheses

def valid_braces(string):
    elements = {"[":"]","(":')',"{":"}"}
    stack = []
    for character in string:
        if character in elements:
            stack.append(character)
        else:
            if len(stack) == 0 or elements[stack.pop()] != character:
                return False
    return len(stack) == 0
  
