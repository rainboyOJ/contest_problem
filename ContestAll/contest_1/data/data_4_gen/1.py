# 生成前3个数据
from random import randint
for i in range(1,4):
    n = randint(5,10)
    m = randint(4,n-1)
    ff = open('problem{}.in'.format(i),'w')
    ff.write('{} {}\n'.format(n,m))
    d = [str(randint(1,10)) for _ in range(0,n-1)]
    ff.write(" ".join(d))
    ff.close()

