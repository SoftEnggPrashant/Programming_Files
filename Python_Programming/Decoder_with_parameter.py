import os

def outer():
    print("outer statement")
    def inner():
        print("inner statement")
    return inner     

outer()