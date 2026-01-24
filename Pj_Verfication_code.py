#for security, don't use this code for real work.

import smtplib
import random

#1- the email who will send the code
email=input('sender email (Be sure 2FA is enable on sender account): ')
#2- app password
e_keypass=input('Write here you Email app password (Be sure 2FA is enable on sender account): ')
#for the email who will send the code

#3- send to who?
receiver_code=input('Write here your email: ')
#4- what the main line?
subject='VERIFICATION CODE'

#1-create the chack code
check=random.randint(1,9999)
check=str(check)
length=len(check)
if length<4:
    check=f"0{check}"
message=f"the code is {check}"
text=f"Subject: {subject} \n\n {message}"

#1- connect with server
server=smtplib.SMTP('smtp.gmail.com',587)
#2- chose type connection for more security
server.starttls()
#3- the same as login page but not use password, but use app password instead
server.login(email,e_keypass)
#4- command to send the email
server.sendmail(email,receiver_code,text)
print('the code has been send to your email.')
checkout=input("Enter here check password: ")

#1- checkout if the user receive Validation code
if checkout==check:
    print("OPEN DATA")
else:
    print("CLOSE DATA")