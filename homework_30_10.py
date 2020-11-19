#///functions///
def number_even(parameter):
  if((int)(parameter / 1000) % 2) == 0:
    if((int)(parameter / 100) % 2) == 0 and ((int)(parameter / 100) - ((int)(parameter/1000) * 10)) != 0:
      if((int)(parameter / 10) % 2) == 0 and ((int)(parameter / 10) - ((int)(parameter/1000) * 10) - ((int)(parameter / 100) - ((int)(parameter/1000) * 10))*10) != 0:
        if parameter % 2 == 0: return 1
  else: return 0

  
def check_string(parameter):
  ints = 0
  chars = 0
  for i in parameter:
    if i.isdigit():
      chars += 1
    else:
      ints += 1      
  return chars, ints

#///1st_exercise///
list_even_numbers = []
for i in range(2000, 5000, 1):
  if number_even(i) == 1:
    list_even_numbers.append(i);
print(list_even_numbers)
#///2nd_exercise///
random_list = [356,4643,24647,3]
small_num = random_list[2]
big_num = random_list[0]

for i in random_list:
  if small_num > i: small_num = i
  if big_num < i: big_num = i
print("\n\nThe smallest number in the list is: ", small_num,"\nThe biggest number in the list is: ", big_num)
#///3rd_exercise///
string = input("\n\n\nType in something: ")
ints, chars = check_string(string)
print("\nThe string: ", string, "\nThere are ", chars, "characters and", ints, "ints.")
