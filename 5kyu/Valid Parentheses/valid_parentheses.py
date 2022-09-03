def valid_parentheses(string):
    """
    It checks if the parentheses are balanced.
    
    :param string: a string of parentheses
    """
    # Creating an empty list.
    stack = []
    for character in string:
        # It checks if the character is "(".
        if character == "(":
            stack.append(character)
        elif character == ")":
            # It checks if the stack is empty or the last element of the stack is not "(".
            if not stack or stack.pop() != "(":
                return False
    # It checks if the stack is empty. 
    return len(stack) == 0 
