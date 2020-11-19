#///imports///
import math



#///functions///
def is_vowel(char):
  for i in list_vowels:
    if char == i:  return 1
  return 0

def is_number(string):
  for i in string:
    if not (i.isnumeric()): return 0
  return 1
  
def _len(number_string):
  len = 0
  for i in number_string:
    len += 1
  return len
def is_even(number):
  for i in range(2, number, 1):
    if number % i == 0 and i != number: return 0
  return 1
  
  
  
#///ex.1///
print("////Ex.1\\\\\n")
list_vowels = ["a","o","e","u","i","а","о","у","и","ъ","е",]
string = input("Type in a string:")
changed_string = ""
print("string before: ", string)

for i in range(0, len(string), 1):
  if is_vowel(string[i]):
    for num in range(0, 3, 1):
      changed_string = changed_string + string[i]
  changed_string = changed_string + string[i]
  
print("string after: ", changed_string)



#///ex.2///
print("////Ex.2\\\\\n")
number1 = "suka"
while not is_number(number1):
  number1 = input("Type in a number: ")
print("number length: ", _len(number1))



#///ex.3///
print("////Ex.3\\\\\n")
square_root_times = 0
number2 = (float)(input("Type in a number:"))
while number2 > 2:
  number2 = (float)(math.sqrt(number2))
  square_root_times += 1
print("Square rooting: ", square_root_times, " times square rooted")



#///ex.4///
print("////Ex.4\\\\\n")
even_nums_list = []
num = (int)(input("Type in a number: "))
for i in range(2, (num + 1), 1):
  if is_even(i): even_nums_list.append(i)
print(even_nums_list)