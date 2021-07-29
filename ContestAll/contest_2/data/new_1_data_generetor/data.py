import sys
from random import randint

s1,t1 = map(int,sys.argv[1:])

n = randint(10,100)
k = randint(s1,(s1+t1)//2)
print(n,k)
for i in range(0,n):
    print(randint(100,1000),randint(1,n))
