
count=int(input("write here you fibonatchi number block: "))
fibonatchi=[0,1]
index0=0
index1=1
for fibonatchi_z in range(count):
    i=fibonatchi[index0]+fibonatchi[index1]
    fibonatchi.append(i)
    index0+=1
    index1+=1
    if len(fibonatchi)==count:
        print(fibonatchi)