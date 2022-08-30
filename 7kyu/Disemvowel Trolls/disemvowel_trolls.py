import re
def disemvowel(s):
    return "".join(re.findall("[^aeouiAEOUI]",s))
