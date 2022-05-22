class Student:
    No_of_student = 60
    def details(self):
        return f"Name is {self.name} and  age is {self.age}"

st = Student()
st.name = "manoj"
st.age = 34
print(st.details())

