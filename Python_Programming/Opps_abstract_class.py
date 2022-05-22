from abc import ABC, abstractmethod
class shape(ABC):
    @abstractmethod
    def area(self):
        return self.a*self.b
class rect(shape):
    a = 3
    b = 34
    def area(self):
        return self.a*self.b

obj = rect()
print(obj.area())
print(dir(ABC))