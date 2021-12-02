def replace_dots_dashes(msg):
    result = ""
    for ch in msg:
        if ch == '.':
            result += '0'
        elif ch == '-':
            result += '1'
        elif ch == ' ':
            result += '/'
    return result


def update_dict(dictionary, key):
    els = list(dictionary.items())
    dictionary.update({key:int(els[-1][1]) + 1} )
    return dictionary