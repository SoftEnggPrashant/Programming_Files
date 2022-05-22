class Student:
    no_of_leaves = 10
    def __init__(self,gname,gage,grollNo):
        self.name = gname
        self.age = gage
        self.rollNo = grollNo

    def showDetails(self):
        return f"name is {self.name} and age is {self.age} and the roll number is {self.rollNo}"
    
    @classmethod
    def change_leave(cls,arg):
        cls.no_of_leaves = arg

    @classmethod
    def form_strs(cls,strings):
        prs = strings.sp
        print(prs)
    #static mathod
    @staticmethod
    def printd(string):
        print("this is the ="+string)

st = Student("manoj",34,12345)
# print(st.no_of_leaves)
# st.change_leave(40)
# print(st.no_of_leaves)
# print(st.showDetails())
# st.form_strs("dkssdf-68-745")
st.printd("sdlfkjh;")