def pattern1(n):
    """
    ****
    ****
    ****
    ****
    """
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print()

def pattern2(n):
    """
    *
    * *
    * * *
    * * * *
    """
    for i in range(n):
        for j in range(i+1):
            print("* ", end= "")
        print()

def pattern3(n):
    for i in range(1, n +1):
        for j in range(i+1):
            print(j , "", end="")
        print()

def main():
    n = int(input(">>>"))
    pattern3(n)

if __name__ =="__main__":
    main()