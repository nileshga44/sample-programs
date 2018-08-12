import threading

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
