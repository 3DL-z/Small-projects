import mysql.connector
#write the inputs to connect with your database
#MAKE SURE INSTALL ALL THE PACKAGES OF MySQL CONNECTION!!!
shost = input('host: ')
suser = input("user: ")
spassword = input("password: ")
sdatabase = input("database: ")

#connecting
conn=mysql.connector.connect(
    host=shost,
    user=suser,
    password=spassword,
    database=sdatabase)
#inseart for this code for example a student on a school
student_id=int(input("Enter the student id: "))
student_name=input("Enter the student name: ")
student_grade=float(input("Enter the student grade: "))
cursor=conn.cursor()
sql="insert into student (id,name,grade) values(%s,%s,%s)"

values = (student_id,student_name,student_grade)
cursor.execute(sql, values)
conn.commit()
cursor.execute("select * from student")
rows=cursor.fetchall()

#show all in the database
for row in rows:
    print(row)
cursor.close()
conn.close()
