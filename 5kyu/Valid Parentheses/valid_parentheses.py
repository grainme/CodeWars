# Using Stack Data structure


def valid_parentheses(string):
    stack = []
    for character in string:
        if character == "(":
            stack.append(character)
        elif character == ")":
            if len(stack) == 0 or stack.pop() != "(":
                return False
    return len(stack) == 0
