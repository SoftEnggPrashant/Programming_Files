#*************************************Moduls**********************************

# Keywords used :
# import
# as
# from

# 4 ways to use it:
# import math
# import math as m
# from math import*
# from math import sqrt

import math
from math import pi
from math import factorial
from random import*
# print(type(math))

# print(pi)
# print(factorial(5))
# l1 = [1,2,3,4,5,6,7]
# print(choice(l1))
# shuffle(l1)
# print(l1)
# print(dir(math))
# print(dir(random))
# print(randint(1,10))
# print(sample(l1,3))

# ********************************** Object Oriented Programming with Python ******************************************
# In Python Everthing is Objects
# for this lesson we will construct our knowledge of OOP in python by building on the following topics
# Objects
# Using the class keywords
# Creating class attributes
# Creating methods in a class
# Learning about inheritance
# Learning about special Methods for classes

''' As we can see above the List1 is of type "<class 'list'>".Basically it is an object of class 'list' ans the mothod count accessed
 via "."(dot notation) performs the count operation in the list List1
 
 what we will basically be doing in this lecture is exploring how we could create an objects type like a list. we've learned about how
  to create fuction... So lets explore Objects.'''
  
# print(type(1))
# print(type('1'))
# print(type([1,2]))
# print(type((2,3)))
# print(type({3}))

def func():
    pass
# print(type(func))

# So we nlow all these things are objects, so how can create our own object types? That is the class keyword comes in

'''************************************* Class *************************************
 the user defined objects are created using the class keywords. the class is a blueprint that defines a nature of a future object.
 Fom classes we can construct instances. An instance is a specific object created from a particular class.
 
 for example:-
 above we created the object'''
 # objects:- is a copy of the class
 # instance:- is a variable that holds a memory address of the object
 # creating own class
 
class Human:
    '''optional doc'''
    pass
# creating the own object
a = Human()
# print(a)
# print(type(a))

''' Attribute is a characterstic of an objects.
 Method is an operation we can perform with the object.
 for ex:- we can create a class called dog. An attribute of  a dog may its breed or its name, while method of a dog may  be 
 defined by a .break() method which returns a sound.'''
 
 # Attribute
 # The syntax for creating an attribut is:
 #     self.attribute = something
 

class human:
    nature = 'nice'

ob = human()
# print(type(ob.nature))
ob.name = 'prashant'
ob.age = 23

# print(ob.name)
# print(ob.age)

#***************************** Methods *********************************

'''Method are functions define d inside the body of a class. They are used to perform operations eith the attributes of our 
objects.

Methods as functions acting on an object that take the object itself into account through it self argument '''


class first:
    a = 'class attribute'
    def cl_mathod(self):
        print('hello')

# f = first()
# f.cl_mathod()

# ************************************ Constructors ****************************************
''' This is a special method which gets called on its own whenever an object is created '''

class circle:
    pi = 3.14
    def __init__(self,radius):
        # print(2*"circle created \n")
        # print('i am round')
        self.radius = radius
    def Area_Of_Circle(self):
        print(pi*self.radius**2)
# ob1 = circle(12)
# print(ob1.radius)
# print(ob1.pi)
# print('Area of circle')
# ob1.Area_Of_Circle()

class Student:
    def __init__(self,Name,Gender,Age):
        self.name = Name
        self.gender = Gender
        self.age = Age
    def show_data(self):
        print(f'{self.name}\n{self.gender}\n{self.age}')

n = input().split()        
s = Student(n[0],n[1],n[2])
s.show_data()