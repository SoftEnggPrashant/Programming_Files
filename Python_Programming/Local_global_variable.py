g =10

def fuction1():
    # g = 5 # this is the local variable of function1
    global g
    g = g+20
    m = 19
    print(g)
    print(m)

def fuction2():
    x = 50
    def function3():
        print(x)
    function3()

fuction2()
fuction1()