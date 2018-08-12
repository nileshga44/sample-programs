from threading import Thread #Thread is build-in python class for multithreading
import time

def sleeper(i):
    print ("\nThread %d sleeps for 5 seconds" % (i))
    time.sleep(5)
    print ("\nThread %d woke up" % (i))

for i in range (10):
    thr = Thread(target=sleeper, args=(i,))
    thr.start()
