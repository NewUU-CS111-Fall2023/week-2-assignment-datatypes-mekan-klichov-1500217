# * Author:
# * Date:
def generator():
    import random
    return ''.join(str(random.randint(0, 9)) for i in range(100))


def main():
    a = int(input("Enter a number: "))
    num = int(generator())
    # num = int(num)
    result = num / a
    print('The result of dividing the 100-digit number by', a, 'is:', result)


if __name__ == "__main__":
    main()
