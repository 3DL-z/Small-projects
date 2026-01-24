
z3DL=[["1","2","3"],["4","5","6"],
      ["7","8","9"],["|","0","|"]]
for z4DL in z3DL:
    for z5DL in z4DL:
        print(z5DL,end=" ")
    print()
cal = input("right here one of this tools (+ - * /) that you want to use: ")

n1 = float(input("enter the first number here: "))
n2 = float(input("enter the secound number here: "))

if cal == "+":
     results = n1+n2
     print(round(results))
elif cal == "-":
     results = round(n1-n2)
     print(results)
elif cal =="*":
     results = round(n1*n2)
     print(results)
elif cal == "/" :
     results = round(n1/n2)
     print(results)
else:
     print(f"the {cal} is not a tool you can use.")
