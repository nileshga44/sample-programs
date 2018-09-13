#!/usr/bin/python

# Date: 2018-09-13
#
# Description:
# Example of thread module and lock mechanism.
#
# Note: Use threading module instead of thread.


# thread module is not present in python 3 and above, instead module
# "threading" is available so focus more on that program.
import thread
import time

print("Multithreading without lock mechanism")
num_threads = 0
def thread_function(thrId, a):
    global num_threads
    print("\n1 | thrId[%d] | num_threads[%d]" % (thrId, num_threads))
    num_threads += 1
    print("\n2 | thrId[%d] | num_threads[%d]" % (thrId, num_threads))
    num_threads -= 1
    print("\n3 | thrId[%d] | num_threads[%d]" % (thrId, num_threads))

thread.start_new_thread(thread_function, (1, 0))
thread.start_new_thread(thread_function, (2, 0))
thread.start_new_thread(thread_function, (3, 0))
print("\nExiting...")

# Problem with above code - num_threads value is not synchronized because
# simultaneous read and write is taking without any lock.
# To cater above problem we will use locking mechanism to access critical
# data/section.

time.sleep(1)
print("\n\nMultithreading with lock mechanism")

num_threads1 = 0
thread_started = False
lock = thread.allocate_lock()
def thread_function1(thrId, a):
    global num_threads1
    lock.acquire()
    print("\n1 | thrId[%d] | num_threads1[%d]" % (thrId, num_threads1))
    num_threads1 += 1
    thread_started = True
    print("\n2 | thrId[%d] | num_threads1[%d]" % (thrId, num_threads1))
    lock.release()
    lock.acquire()
    num_threads1 -= 1
    print("\n3 | thrId[%d] | num_threads1[%d]" % (thrId, num_threads1))
    lock.release()

thread.start_new_thread(thread_function1, (1, 0))
thread.start_new_thread(thread_function1, (2, 0))
thread.start_new_thread(thread_function1, (3, 0))
print("\nExiting...")
time.sleep(1)


# Output:
# -------------------------------------
#
# Multithreading without lock mechanism
#
# Exiting...

# 1 | thrId[1] | num_threads[0]
# 1 | thrId[2] | num_threads[0]


# 2 | thrId[1] | num_threads[1]
# 1 | thrId[3] | num_threads[1]
# 2 | thrId[2] | num_threads[2]



# 3 | thrId[1] | num_threads[1]
# 2 | thrId[3] | num_threads[2]
# 3 | thrId[2] | num_threads[1]



# 3 | thrId[3] | num_threads[0]


# Multithreading with lock mechanism

# Exiting...

# 1 | thrId[3] | num_threads1[0]

# 2 | thrId[3] | num_threads1[1]

# 3 | thrId[3] | num_threads1[0]

# 1 | thrId[2] | num_threads1[0]

# 2 | thrId[2] | num_threads1[1]

# 3 | thrId[2] | num_threads1[0]

# 1 | thrId[1] | num_threads1[0]

# 2 | thrId[1] | num_threads1[1]

# 3 | thrId[1] | num_threads1[0]
