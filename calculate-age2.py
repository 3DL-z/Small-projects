import datetime
z3DL=datetime.datetime.today()
answer=int(input("do you want to calculat Age? 1-yes or 2-no: "))
while answer>=3 or answer<=0:
    answer=int(input("Type one of the available options: "))
if answer==1:
    current_year=z3DL.year
    current_month=z3DL.month
    current_day=z3DL.day
    print(f"{current_year}/{current_month}/{current_day}")
    #..................................................................................
    print("Now Enter your date birth")
    bir_year=int(input("Write your birth year: "))
    while bir_year >= 2025 or bir_year <= 1900:
        bir_year = int(input("Write a real year:  "))
    bir_month=int(input("Write your birth month: "))
    while bir_month > 12 or bir_year < 1:
        bir_month = int(input("Write a real month:  "))
    bir_day=int(input("Write your birth day: "))
    while bir_day > 31 or bir_day < 1:
        bir_year = int(input("Write a real day:  "))
    print(f"your birth date is {bir_year}/{bir_month}/{bir_day}")
    #..................................................................................
    if bir_day>current_day:
        current_month=current_month-1
        current_day=current_day+30
        age_day=current_day-bir_day
    else:
        age_day=current_day-bir_day

    if bir_month>current_month:
        current_year = current_year - 1
        current_month = current_month + 12
        age_month = current_month - bir_month
    else:
        age_month = current_month - bir_month

    age_year=current_year-bir_year
    print(f"you are {age_year} years old and {age_month} month and {age_day} day")
else:
    print("alright then good bye.")
