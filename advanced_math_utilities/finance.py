import math

def compound_interest(P, r, t):
    return P * math.exp(r * t)


def loan_payment(P, r, n):
    return P * (r * (1+r)**n) / ((1+r)**n - 1)