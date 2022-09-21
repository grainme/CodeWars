def camel_case(string):
    return "".join(map(lambda x:x.lower().capitalize(),string.split()))