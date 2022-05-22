class Employee:
    def __init__(self,name,sal,id):
        self.name = name
        self.salary = sal
        self.id = id
        
    def showDetails(self):
        return f"{self.name}, { self.salary}, {self.id}"
    
    def __add__(self,b):
        return self.salary + b.salary
    def __sub__(self,b):
        return self.salary - b.salary
    def __mul__(self,b):
        return self.salary * b.salary
        
        
obj = Employee('john',456,711111)
obj1 = Employee('kong',345,3848347)
print(obj.showDetails())
print(obj+obj1)
print(obj-obj1)
print(obj*obj1)