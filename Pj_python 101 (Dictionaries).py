import time
seconds=5
check=False
Phone_directory={"1111111111":"Amal","2222222222":"Mohammed","3333333333":"Khadijah","4444444444"
:"Abdullah","5555555555":"Rawan","6666666666":"Faisal","7777777777":"Layla"}
def search_by_number():
    check = False
    while check == False:
        pointer = input("Write here number of person: ")
        if len(pointer) == 10:
            for s in Phone_directory.keys():
                if s == pointer:
                    check = True
                    print(Phone_directory[pointer])
                    break
            if check == False:
                print("Sorry, the number is not found")
        else:
            print("This is invalid number")
def search_by_name():
    check = False
    while check == False:
        pointer = input("Write here name of person: ")
        for s in Phone_directory.values():
            if s == pointer:
                check = True
                for num_founder in Phone_directory.keys():
                    if Phone_directory[num_founder] == pointer:
                        print(num_founder)
                break
        if check == False:
            print("Sorry, name is not found")
addchoice=input("you can add user if you want to: yes or no? ")
if addchoice=="yes":
    numberL=input("Write here user number (most be 10 numbers) :")
    while numberL.isdigit()==False:
        numberL = input("most be 10 and numbers: ")
    while len(numberL) != 10:
        numberL = input("most be 10 and numbers: ")
    numberL=str(numberL)
    namez = input("Write here user name :")
    while namez.isalpha()==False:
        namez = input("most be have no numbers: ")
    #add_directory={numberL:namez}
    Phone_directory[numberL]=namez
print(Phone_directory)
choice=input("Do you want to find by number or name? ")
choice3=False
while choice3==False:
    if choice == "number":
        choice3=True
        search_by_number()
        break
    elif choice == "name":
        choice=True
        search_by_name()
        break
    else:
        choice = input("Error: Do you want to find by number or name? ")
print("program shutdown in 5 seconds:")
for second in range(seconds):
    print(" ", second, end="")
    time.sleep(1)
print("  5",end="")



