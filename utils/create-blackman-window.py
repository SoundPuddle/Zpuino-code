import numpy as np
np.set_printoptions(formatter={'int':hex})

print "Calculating Blackman window"

table_size = 256
max_amplitude = 255
table = np.array(np.blackman(table_size))
#table = table * 255
#np.array(table)

print (table)
#[hex(ord(c)) for c in table]

#import numpy as np
#np.set_printoptions(formatter={'int':hex})
#test = np.array([11545454,2,3,4,5])
#print(test)