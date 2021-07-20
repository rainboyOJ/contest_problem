import sys
import os
import glob
testId = sys.argv[1]
exe = '../std/{}'.format(testId)

inputs = sorted(glob.glob("{}/*.in".format(testId)))

for In in inputs:
    Out = In.replace('in','out')
    os.system('{} < {} >{}'.format(exe,In,'/tmp/out'))
    if(os.system('diff {} {}'.format('/tmp/out',Out))):
        print('error: ',In)
        sys.exit()
print('all right!!')


