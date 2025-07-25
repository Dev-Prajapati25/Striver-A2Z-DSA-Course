"""
Pattern ->
****
****
****
****
"""

# No of rows = 4
# Each row prints 4 stars
n = input(">>>")

for i in range(n):
    for j in range(n):
        print("*", end="")
    print()