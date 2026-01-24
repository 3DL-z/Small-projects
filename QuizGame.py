print("Lets start our Quiz game z3DL!")
questions=["py in math is equal?",
           "python is a??","where did you find this code?"]
options=[["A.2.44","B.62","C.100","D.3.14"],
         ["A.programing language","B.food","C.screen","D.speaker"],
["A. from youtube","B. from 3DL","C. from chatgbt","D. its your code"]
         ]
answers=["D","A","B"]
guesses=[]
score=0
question_num=0
divider=0
for question in questions:
    print('------------------------------------------------------------')
    print(question)

    for option in options[question_num]:
        print(option)
    guess = input("write here your answer: ").upper()
    if guess==answers[question_num]:
        print("CORRECT")
        score=score+1
        divider=divider+1
    else:
        print("INCORRECT")
        divider = divider + 1
    question_num = question_num+1
score=float((score/divider)*100)
print(score,end="%")