class First:
    name1 = 'the first class'
    def show1(self):
        print(self.name1)
class Second:
    name2 = 'the second class'
    def show2(self):
        print(self.name2)
class Third(First,Second):
    name3 = "the third class"
    def show3(self):
        print(self.name3)

obj = Third()
obj.show1()
obj.show2()
obj.show3()
