import time
import threading

def sleeper(i):
    print ("\nThread %d sleeps for 5 seconds" % (i))
    time.sleep(5)
    print ("\nThread %d woke up" % (i))

for i in range (10):
    thr = threading.Thread(target=sleeper, args=(i,))
    thr.start()


# Another example.
class primeNumber(threading.Thread):
    def __init__(self, number):
        threading.Thread.__init__(self)
        self.Number = number
    
    def run(self):
        counter = 2
        while (counter < self.Number/2):
            if (0 == self.Number % counter):
                print ("\nNumber [%d] is not prime" % (self.Number))
                return 
            else:
                counter += 1
        else:
            print ("\nNumber [%d] is prime" % (self.Number))

threads = []
while True:
    num = long(input("\nEnter number: "))
    if (1 > num):
        break
    thread = primeNumber(num)
    threads.append(thread)
    thread.start()

for x in threads:
    x.join()
