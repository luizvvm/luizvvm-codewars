def validate_hello(greetings):
    #O(n)
    cumprimentos = ['hello', 'ciao', 'salut', 'hallo', 'hola', 'ahoj', 'czesc']
    for palavra in cumprimentos:
        if palavra in greetings.lower():
            return True
    else:
        return False