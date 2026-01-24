import datetime
Lday=(datetime.datetime.today())
Lday=str(Lday.day)

Lmonths=12
Smonths=datetime.datetime.today()
Smonths=int(Smonths.month)
C=None
#Smonths=3
if Smonths==9 or Smonths>9 :
    C = str(Lmonths - (Smonths - 9))

elif Smonths<9:
    C=str(Lmonths-(Smonths+3))


current=0
calculater=0
suma=0

Qs=["Q1- what day we are in right now?"
    ,"Q2- how much months you do have right now buddy to ... (question for 3DL)"
    ,"Q3- are ready for it?! because i believe you have it inside you, i believe in you"]
Opt=[["A-4","B-27",f"C-{Lday}","D-14"]
    ,[f"A-{C}","B-4","C-10","D-7"]
    ,["A-yes I am","B-YES I AM!"]]
Ans=["C","A","B"]
for question in Qs:
    print(question)
    calculater=calculater+1


    for option in Opt[current]:
        print(option)
    Answer=input("Your answer is? ").upper()

    if Answer==Ans[current]:
        print("Currect!")
        suma=suma+1
    else:
        print("incurrect")
    current += 1

#print(current)
#print(calculater)
#print(sum)
sum1=(suma/calculater)*100
print(f"your ratio {sum1:.2f} %")



