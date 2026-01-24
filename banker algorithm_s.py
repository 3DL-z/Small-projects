# banker algorithm
# need:
# max-allocation
# available:
# if [available (>=) need] then next available(NEW)= allocation+available
# if [available (<) need] then take the process aside and keep available the same
#for request:
# [request >= need] to avoid Error
# [request >= available] to know safe process sequence
# if both true, then:
# allocation(NEW)= request + allocation
# need(NEW)= need - request
# available(NEW) = available - request

#anyway, we do have 5 processes and 3 resources


Re_Sorting=1
maxL=[[7,5,3],[10,5,3],[3,2,2],[9,0,2],[2,2,2],[4,3,3]]
allocation=[[0,1,0],[0,1,0],[2,0,0],[3,0,2],[2,1,1],[0,0,2]]
available=[[3,3,2]]
Listzero=['P0','P1','P2','P3','P4','P5']
p=len(maxL)
r=len(maxL[0])
k=0
need=[]
request=[]
apoind=[]
apoindA=[]
sequence=[]
wrone_sequence=[]
right_sequence=[]
gate=None

#calculate need:
for i in range(p):
    for j in range(r):
        apoindA.append(0)
        apoind.append(maxL[i][j]-allocation[i][j])
    need.append(apoind)
    apoind = []
    apoindA=[]
print('max is')
for i in range(p):
    print(maxL[i])
print('\nallocation is')
for i in range(p):
    print(allocation[i])
print('\nneed is')
for i in range(p):
    print(need[i])
need=[[7,4,3],[10, 4, 3],[1, 2, 2],[6, 0, 0],[0, 1, 1],[4, 3, 1]]
available=[[3,3,2]]
#available:
def allo_valavble(z,x):
    return z+x
def need_valavle(a,b):
    if a>b or a==b:
        return True
    else:
        return False

for i in range(p):
    for j in range(r):
        check=need_valavle(available[k][j], need[i][j])
        if check:
            right_sequence.append(i)
            apoind.append(allo_valavble(available[k][j], allocation[i][j]))
        elif not check:
            wrone_sequence.append(i)
            apoind.extend(available[k])
            break
    available=[apoind]
    apoind = []

f=0
n=0
s=False
while not s:
    for f in range(p+len(right_sequence)):
        if n in right_sequence:
            if right_sequence.count(n)>1:
                right_sequence.remove(n)
            else:
                n+=1
        else:
            n+=1
    if f not in right_sequence:
        s=True
    f+=1
safe_sequence=False
while not safe_sequence:
    print(f'Re-Sorting {Re_Sorting}')
    for i in wrone_sequence:
        for j in range(r):
            check = need_valavle(available[k][j], need[i][j])
            if check:
                right_sequence.append(i)
                apoind.append(allo_valavble(available[k][j], allocation[i][j]))
            elif not check:
                wrone_sequence.append(i)
                apoind.extend(available[k])
                break
        available = [apoind]
        apoind = []
    f = 0
    n = 0
    s = False
    while not s:
        for f in range(len(wrone_sequence) + len(right_sequence)):
            if n in right_sequence:
                if right_sequence.count(n) > 1:
                    right_sequence.remove(n)
                else:
                    n += 1
            else:
                n += 1
        if f not in right_sequence:
            s = True
        f += 1
    sequence=right_sequence
    if wrone_sequence:
        safe_sequence=True
        sorting=len(right_sequence)-1
        for i in range(len(wrone_sequence)):
            right_sequence[sorting]=wrone_sequence[i]
    Re_Sorting+=1
print(f'final process sequence:',end=" ")
for i in right_sequence[:-1]:
     print(f'P{i}',end="-->")
print(f'P{right_sequence[-1]}')
print(f'\nthis is the available {available}')


choose_process=input('do you want add a request (Y/N): ')
while choose_process != 'Y' and choose_process !='N':
    choose_process = input('Please write one of the options (Y/N): ')
request = []
needr=[]
allocationr=[]
availabler=[]
check=None



def needr_valavle(a,b,c):
    t=c+a
    if t<b or t==b:
        return True
    else:
        return False
if choose_process=="Y":

    choose_process = input('choose the process you do want to add request on it '
                           'P0, P1, P2, P3, P4, P5: ')
    while (choose_process != 'P0' and choose_process != 'P1' and choose_process != 'P2'
           and choose_process != 'P3' and choose_process != 'P4' and choose_process != 'P5'):
        answer = input('Please write one of the options (P0~P5): ')
    print('go write the elements here: ')
    i = Listzero.index(choose_process)


    for d in range(len(maxL[0])):
        request.append(int(input()))
    print(f'your request is {request}')

    for j in range(r):
        check = needr_valavle(request[j], need[i][j], allocation[i][j])
        if check:
            needr.append(need[i][j]-request[j])
            allocationr.append(allocation[i][j]+request[j])
            availabler.append(available[k][j]-request[j])
        elif not check:
            print('request is denied, will lead to Deadlock.')
            break
    if check:
        need[i] = needr
        allocation[i] = allocationr
        available[0] = availabler
    print(f'this Process has need:{needr}, allocation:{allocationr}, available:{availabler}')

    for i in range(p):
        for j in range(r):
            check = need_valavle(available[k][j], need[i][j])
            if check:
                right_sequence.append(i)
                apoind.append(allo_valavble(available[k][j], allocation[i][j]))
            elif not check:
                wrone_sequence.append(i)
                apoind.extend(available[k])
                break
        available = [apoind]
        apoind = []
    f = 0
    n = 0
    s = False
    while not s:
        for f in range(p + len(right_sequence)):
            if n in right_sequence:
                if right_sequence.count(n) > 1:
                    right_sequence.remove(n)
                else:
                    n += 1
            else:
                n += 1
        if f not in right_sequence:
            s = True
        f += 1
    safe_sequence = False
    while not safe_sequence:
        print(f'Re-Sorting {Re_Sorting}')
        for i in wrone_sequence:
            for j in range(r):
                check = need_valavle(available[k][j], need[i][j])
                if check:
                    right_sequence.append(i)
                    apoind.append(allo_valavble(available[k][j], allocation[i][j]))
                elif not check:
                    wrone_sequence.append(i)
                    apoind.extend(available[k])
                    break
            available = [apoind]
            apoind = []
        f = 0
        n = 0
        s = False
        while not s:
            for f in range(len(wrone_sequence) + len(right_sequence)):
                if n in right_sequence:
                    if right_sequence.count(n) > 1:
                        right_sequence.remove(n)
                    else:
                        n += 1
                else:
                    n += 1
            if f not in right_sequence:
                s = True
            f += 1
        sequence = right_sequence
        if wrone_sequence:
            safe_sequence = True
            sorting = len(right_sequence) - 1
            for i in range(len(wrone_sequence)):
                right_sequence[sorting] = wrone_sequence[i]
        Re_Sorting += 1
    print(right_sequence)
    print(f'final process sequence:', end=" ")
    for i in right_sequence[:-1]:
        print(f'P{i}', end="-->")
    print(f'P{right_sequence[-1]}')
