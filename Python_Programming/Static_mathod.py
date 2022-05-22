class student:
    roll = 2341343
    @staticmethod
    def printroll(arg):
        print("the student roll no is",arg)

st = student()
st.printroll(st.roll)
student.roll = 232
st.printroll(st.roll)