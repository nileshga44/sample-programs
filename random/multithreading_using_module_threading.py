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

for x in threads:
    x.join()
