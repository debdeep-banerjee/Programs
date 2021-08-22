import sys
import collections
def compress_string(s):
	#s=list(s)
	dict_1={}
	#Sort the string
	s=sorted(s)
	set(s)
	s=list(s)
	#for i in range(len(s)):
	for j in range(len(s)-1):
		if(s[j] == s[j+1]):
			print("Duplicate in the string elements detected which is", s[j])
			temp=s[j]
			s[j]=s[j+1]
			s[j+1]=temp
	c=collections.Counter(s)
	print(c.keys())
	print(c.values())		
	s=''.join(s)
	return c
c1=compress_string("aabbbddd")
#print(c1)
list_1=[]
#for c,v in c1.items():
#	list_1.append(c,v)
#print(list_1)
m = str(c1)
#j = ', '.join(m)
print(m)

