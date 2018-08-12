print ("******************* Functin inside a function ******************")
def messageWithWelcome(msg):
    def addWelcome():
        return "Welcome to "
    return addWelcome() + msg

def site(site_name):
    return site_name

print messageWithWelcome(site("geeksforgeeks"))

print ("******************* Function decorator ******************")
def decorate_message(fun):
    def addWelcome(site_name):
        return "Welcomee to " + fun(site_name)
    return addWelcome

@decorate_message
def site1(site_name):
    return site_name
print site1("GeeksforGeeks")
