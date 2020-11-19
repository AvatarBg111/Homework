num_numbers = (int)(input("Type in a number: "))
num = num_numbers - 1;

while num != 0:
  num_numbers += num
  num -= 1

print("The number: ", num_numbers)
#//////////////////1va zadacha///////////////////////////////////////////////////////////////
ze_list = [1, 2, 65, 66, 980, 765, 666]
even_nums = 0;
not_even_nums = 0;
for i in ze_list:
  if (i % 2) == 0:
    even_nums += 1
  else:
    not_even_nums += 1
print("The even numbers in the list are ", even_nums, " and the uneven numbers are ", not_even_nums)
#//////////////////2ra zadacha///////////////////////////////////////////////////////////////
num1 = (int)(input("Type in a number: "))
num2 = len(ze_list)
for i in ze_list:
  if i % 2 == 0:print("")
  elif i % 3 == 0:print("")
  elif i % 5 == 0:print("")
  elif i % 7 == 0:print("")
  elif i % 9 == 0:print("")
  elif num1 != 0:
    print("The number at location ", len(ze_list) - num2 + 1, " is a simple number")
      num1 -= 1
      num2 -= 1