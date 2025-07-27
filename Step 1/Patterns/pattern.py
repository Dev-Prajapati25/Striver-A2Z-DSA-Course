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

def main():
    n = int(input(">>>"))
    pattern2(n)

if __name__ =="__main__":
    main()