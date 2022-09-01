import re
def generate_hashtag(s):
    res = "#"+"".join(i.title() for i in re.split(" +",s.rstrip()))
    return res if (len(s)>0 and len(res) <= 140) else False
