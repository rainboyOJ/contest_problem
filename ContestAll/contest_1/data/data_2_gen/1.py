import sys
f = open('in')
li = f.readlines()

cnt = 0
for i in range(0,len(li),2):
    b = li[i:i+2]
    if b[0].__len__() < 10:
        continue
    cnt+=1
    ff = open('p{}.in'.format(cnt),'w')
    ff.write(b[0])
    ff.write(b[1])
    ff.close()
    if cnt==10:
        break

f.close()


