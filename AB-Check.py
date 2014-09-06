import re


def ABCheck(string_to_check):
    pattern = re.compile('a...b|b...a')
    return bool(re.search(pattern, string_to_check))
