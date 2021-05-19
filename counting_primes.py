def counting_primes(num):
    primenumbers = [2]
    if num < 2:
        return 0
    x = 3

    while x <= num :
        for y in primenumbers:
            if x % y == 0:
                x += 2
                break
        else:
            primenumbers.append(x)
            x += 2
    
    return primenumbers


number = int(input("Enter the number within which you want prime numbers "))
primes = counting_primes(number)
print(len(primes))
print("Type y to print prime numbers")
choice = input()
if choice.lower() == 'y':
    print(primes)

