import random
check=random.randint(1,9999)
print(f"Your check password is {check:04}")
check=str(check)
length=len(check)
if length<4:
    check=f"0{check}"
checkout=input("Enter here check password: ")
if checkout==check:
    print("OPEN DATA")
else:
    print("CLOSE DATA")

