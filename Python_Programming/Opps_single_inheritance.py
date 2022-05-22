class Student:
    def __init__(self,name,age,roll):
        self.name = name
        self.age =  age
        self.roll = roll
    def printdatails(self):
        print(f"the student name is{self.name} , age is {self.age} and the roll no. is{self.roll}")
    @classmethod
    def printdetail1(cls,name,age,roll):
        return f"the name is {name} and {age} and {roll}"

class Employee(Student):
    Ename = "prashant"
    Eage = 23

Em = Employee("manoj",23,180632)
print(Em.printdetail1(Em.name,Em.age,Em.roll))
Em.printdatails()
print(Em.Ename,Em.Eage)
