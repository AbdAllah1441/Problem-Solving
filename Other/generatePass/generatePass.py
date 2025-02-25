import random as rnd
import string

def generate_password(length):
    uppercase_letters = string.ascii_uppercase
    lowercase_letters = string.ascii_lowercase
    digits = string.digits
    symbols = string.punctuation

    password = rnd.choice(uppercase_letters)
    password += rnd.choice(lowercase_letters)
    password += rnd.choice(digits)
    password += rnd.choice(symbols)

    for _ in range(length - 4):
        characters = rnd.choice([uppercase_letters, lowercase_letters, digits,symbols])
        password += rnd.choice(characters)

    password = list(password)
    rnd.shuffle(password)
    return ''.join(password)
