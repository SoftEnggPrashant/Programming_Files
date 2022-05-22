str = "prashant is the good boy"
print(len(str))
print(str[::]) #there are not skip the charecters
print(str[::2]) # there are skip the one charecters and print it
#str[starting address : ending address/constom address : skiped value number]

# reverse the string without using function
print(str[::-1])

#Some string function 

print(str.isalnum()) # it is check the alphabatic string
print(str.isalpha()) # it is check the alphanumeric string
print(str.endswith("boy")) # it check the end with string is boy or not 
print(str.count("o"))  #count the number of chracters
print(str.capitalize())  # formant the string for example prashant to Prashant
print(str.replace("is","are")) # it is reaplace the string 