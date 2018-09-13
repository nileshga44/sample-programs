#!/usr/bin/python

# Date: 2018-09-13
#
# Description:
# Example to show usage of python threading module.
# Please note that due to GIL in python only single thread gets interpreter at
# a time and others wait for there turn get the lock.


import time
import threading

def sleeper(i):
    print('\nThread %d sleeps for 5 seconds' % i)
    time.sleep(5)
    print('\nThread %d woke up' % i)

for i in range(10):
    thr = threading.Thread(target=sleeper, args=(i,))
    thr.start()


time.sleep(7)
print '\n\nAnother example of threading using class(prime checker)...'
time.sleep(1)

class primeNumber(threading.Thread):
    def __init__(self, number):
        threading.Thread.__init__(self)
        self.Number = number
    
    # Implement run method in threading.Thread class, this will be called when
    # we do thread.start().
    def run(self):
        counter = 2
        while counter < self.Number/2:
            if not self.Number % counter:
                print('\nNumber[%d] is not prime' % self.Number)
                return 
            else:
                counter += 1
        else:
            print('\nNumber[%d] is prime' % self.Number)


threads = []
while True:
    num = long(input('\nEnter number(0 to exit): '))
    if 1 > num:
        break
    thread = primeNumber(num)
    threads.append(thread)
    thread.start()

print '\nJoining all threads...'
for x in threads:
    x.join()


# Output:
# ----------------------------------------------
# Thread 0 sleeps for 5 seconds
 
# Thread 1 sleeps for 5 seconds

# Thread 2 sleeps for 5 seconds

# Thread 3 sleeps for 5 seconds

# Thread 4 sleeps for 5 seconds

# Thread 5 sleeps for 5 seconds

# Thread 6 sleeps for 5 seconds
# Thread 7 sleeps for 5 seconds


# Thread 8 sleeps for 5 seconds
 
# Thread 9 sleeps for 5 seconds

# Thread 2 woke up

# Thread 6 woke up
# Thread 0 woke up
# Thread 5 woke up



# Thread 1 woke up
# Thread 7 woke up
# Thread 4 woke up
 
# Thread 8 woke up



# Thread 3 woke up

# Thread 9 woke up


# Another example of threading using class(prime checker)...

# Enter number(0 to exit): 5

# Number[5] is prime
# Enter number(0 to exit): 
# 6

# Number[6] is not prime
# Enter number(0 to exit): 
# 0

# Joining all threads...
