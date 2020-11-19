string = input("Type in something:")
number = (int)(input("Type in a number:"))

split_times = (int)(len(string) / number)
print("Split times are:", split_times)

for i in range(0, number, 1):
  if number > len(string):
    print("The whole string", string)
  print(string[i * split_times:((i + 1) * split_times)])
  if((i == split_times - 1) and (len(string) % split_times) != 0) == 1:
    print(string[i * split_times:len(string)])
  
  
  