def to_weird_case(words):
    """
    1. Split the string into a list of words.
    2. Iterate through the list of words.
    3. For each word, iterate through the letters.
    4. If the index of the letter is even, make it uppercase.
    5. If the index of the letter is odd, make it lowercase.
    6. Join the list of words back into a string
    
    :param words: a string of words separated by spaces
    :return: A string of the same length as the input string, but with the first letter of every word
    capitalized.
    """
    l = words.split()
    M = []
    for word in l:
        res = "".join(word[k].upper() if k % 2 == 0 else word[k].lower() for k in range(len(word)))
        M.append(res)
    return " ".join(M)