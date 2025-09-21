def disemvowel(string_):
    vogais = "aeiouAEIOU"
    return "".join([char for char in string_ if char not in vogais])