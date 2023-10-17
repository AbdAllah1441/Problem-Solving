import math

def is_prime(n):
    if n <= 1:
        return False
    if n % 2 == 0:
        return n == 2
    max_div = math.floor(math.sqrt(n))
    for i in range(3, 1 + max_div, 2):
        if n % i == 0:
            return False
    return True

def reqPrime(n):
    primes = [2]
    i = 3
    while sum(primes) < n:
        if is_prime(i):
            primes.append(i)
        i  =i + 2
    fin_seq = []
    l = len(primes)
    j = l
    while j != 0:
        i = 0
        while i + j < l + 1:
            seq = primes[i: i + j]
            if is_prime(sum(seq)):
                if len(seq) > len(fin_seq):
                    fin_seq = seq
            i = i + 1
        j = j - 1
    return(sum(fin_seq))

print(reqPrime(100000))
