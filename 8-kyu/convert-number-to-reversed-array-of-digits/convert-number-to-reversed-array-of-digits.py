def digitize(n):
    ntemp = []
    
    while(n >= 10):
        ntemp.append(n%10)
        n //= 10
    ntemp.append(n)
    return ntemp;