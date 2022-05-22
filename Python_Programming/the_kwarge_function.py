import os

def function2(**kwarge):
    for key,value in kwarge.items():
        print(f"the key is {key} and value is {value} ")

D = {"first":"this first","second":"this is second","third":"this is third","fourth":"this is fourth"}

function2(**D)