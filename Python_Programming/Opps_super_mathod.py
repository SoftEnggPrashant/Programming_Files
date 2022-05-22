class Employee:
    id = 1212443
    def __init__(self,name,add,):
        self.name = name
        self.add = add
        self.special = "this is the special variable"
        
class Student(Employee):
    roll = 124293845
    def __init__(self, name, add):
        self.sname = name
        self.sadd = add
        super().__init__(name,add)
        
obj = Student('kargo','meerut')
print(obj.name)
print(obj.add)
print(obj.special)
print(obj.sname)
print(obj.sadd)