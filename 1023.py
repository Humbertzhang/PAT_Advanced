num = int(input())
num2 = 2 * num
num = str(num)
num2 = str(num2)
dic1={}
dic2={}
for i in range(10):
    dic1[str(i)] = 0
    dic2[str(i)] = 0

for i in xrange(len(num)):
    dic1[num[i]] += 1
for i in xrange(len(num2)):
    dic2[num2[i]] += 1

if dic1 == dic2:
    print("Yes")
else:
    print("No")
print(num2)
