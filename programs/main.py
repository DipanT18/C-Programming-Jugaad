#Fibonacci sequence generator
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

if __name__ == "__main__":
    n = int(input("Enter the number of terms in the Fibonacci sequence: "))
    print(f"Fibonacci sequence with {n} terms: {list(fibonacci(n))}")


def reverse_number(num):
    return str(num)[::-1]

if __name__ == "__main__":
    number = int(input("Enter a number to reverse: "))
    print(f"Reversed number: {reverse_number(number)}")

def is_palindrome(s):
    return s == s[::-1]

if __name__ == "__main__":
    text = input("Enter a string to check for palindrome: ")
    print(f"Is palindrome: {is_palindrome(text)}")