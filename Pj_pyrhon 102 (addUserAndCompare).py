import datetime
#functions
#1- function used to display or talk about these people
def display(name1,age,nday1):
    print(f'{name1} is {age} years old and he/she was born on {nday1}')
#2- function
def dic_changer(**kwargs):
    print(f'{kwargs['name']}, {kwargs['bir']}')

#bariables and lists and dictionaries
namwbir={}
NamwOld={}
Lname=[]
Lbir=[]
Lold=[]
Lday=[]
Tr=True
people=1

#enter values
name = input('Write new person name: ')
Lname.append(name)
birthY = int(input('Write here person year birth: '))
while birthY >= 2025 or birthY <= 1900:
    birthY = int(input(f"invalid {name} year, Write a real year:  "))
birthM = int(input('Write here person month birth: '))
while birthM > 12 or birthM < 1:
    birthM = int(input(f"invalid {name} month, Write a real month:  "))
birthD = int(input('Write here person birth day: '))
while birthD > 31 or birthD < 1:
    birthD = int(input(f"invalid {name} day, Write a real day:  "))

#here we insert values and append inside lists
# and insert inside the dictionaries
birth_day =datetime.date(birthY,birthM,birthD)
Lbir.append(birth_day)
#nday here is to take the name of the day from date
#its change the date type and make it string with the week day name
nday=birth_day.strftime('%A')
Lday.append(nday)
namwbir[name]=birth_day

#calculate old: you used here the real datetime
rNow=datetime.date.today()
current_year = rNow.year
current_month = rNow.month
current_day = rNow.day
if birthD > current_day:
    current_month = current_month - 1
    current_day = current_day + 30
    age_day = current_day - birthD
else:
    age_day = current_day - birthD
if birthM > current_month:
    current_year = current_year - 1
    current_month = current_month + 12
    age_month = current_month - birthM
else:
    age_month = current_month - birthM
age_year=int(current_year-birthY)
Lold.append(age_year)
NamwOld[name]=age_year
#there's a problem about consider or naming (%A name of the day)
#maybe it's from  the whole code of line 44

#whileloop to add more
# people, of course now we should
# write the repeat function so we can add more people
while Tr:
    addchoice=input('do you want to add person? yes or no: ').lower()
    if addchoice=='no':
        Tr=False
    elif addchoice=='yes':
        people=people+1
        name = input('Write new person name: ')
        Lname.append(name)
        birthY = int(input('Write here person year birth: '))
        while birthY >= 2025 or birthY <= 1900:
            birthY = int(input("Write a real year:  "))
        birthM = int(input('Write here person month birth: '))
        while birthM > 12 or birthM < 1:
            birthM = int(input("Write a real month:  "))
        birthD = int(input('Write here person birth day: '))
        while birthD > 31 or birthD < 1:
            birthD = int(input("Write a real day:  "))
        birth_day = datetime.date(birthY, birthM, birthD)
        Lbir.append(birth_day)
        namwbir[name] = birth_day
        # calculate old
        rNow = datetime.date.today()
        current_year = rNow.year
        current_month = rNow.month
        current_day = rNow.day
        if birthD > current_day:
            current_month = current_month - 1
            current_day = current_day + 30
            age_day = current_day - birthD
        else:
            age_day = current_day - birthD
        if birthM > current_month:
            current_year = current_year - 1
            current_month = current_month + 12
            age_month = current_month - birthM
        else:
            age_month = current_month - birthM
        age_year = int(current_year - birthY)
        Lold.append(age_year)
        NamwOld[name]=age_year
        nday = birth_day.strftime('%A')
        Lday.append(nday)

    else:
        print('Write answer correctly...')

#we now want to display the entir people who got inserted
repeat=0
while repeat!=people:
    display(Lname[repeat],Lold[repeat],Lday[repeat])
    NamwOld[Lname[repeat]] = Lold[repeat]
    repeat=repeat+1

# play with the keys
#making keys that can help with advanced requests
names=NamwOld.keys()
oldest=max(Lold)
youngest=min(Lold)

#here we show who is oldest and who is youngest
if people==1:
    print('There no oldest or youngest...')
else:
    for nam in names:
        #here we take out ever key from
        # NamwOld.keys() to use it as know who is
        # equal to the biggest number age and then print it
        if NamwOld[nam] == oldest:
            print(f'the oldest one is {nam}')
            break
            #break here to stop any more wast of resources
    for nam in names:
        if NamwOld[nam] == youngest:
            #the all same in here
            print(f'the youngest one is {nam}')
            break


print(f'number of People is {people}')
print('Elders from oldest to youngest ')


Rsort=oldest
Tsort=1
for sort in range(oldest):
    #we use range method because oldest variable are intger
    for nam in names:
        #in this code we want to sort the people by ages
        # the oldest on top
        if NamwOld[nam]==Rsort:
            #we make the Rsort variable equal to the oldest guy and
            # start search from up to down
            print(f'{Tsort}- {nam} is {Rsort} old')
            Tsort += 1
    Rsort=Rsort-1



repeat=-1
peoplez=people-1
#packing a dictionary with function
while peoplez!=repeat:
    dic_changer(name=Lname[peoplez], bir=Lbir[peoplez] )
    peoplez=peoplez-1

#code to show people who born in Sunday only
for namzz in namwbir.keys():
    name_of_day=namwbir[namzz].strftime('%A')
    #as you see, we used strftime to transfer the day to
    # sentence and compere it to 'Sunday'
    if name_of_day=='Sunday':
        print('\n\n the people who birth on Sunday')
        print(f"{namzz}",end=" ")

