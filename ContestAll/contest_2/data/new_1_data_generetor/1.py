import os
for i in range(7,11):
    in_name = "{}.in".format(i)
    out_name = "{}.out".format(i)
    os.system('python data.py 5000 100000 > {}'.format(in_name) )
    os.system('../../std/1 < {} > {}'.format(in_name,out_name) )
