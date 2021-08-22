import sys

#Accept the arguments
argv_1=sys.argv[1]
print("The first argument is",argv_1)
def is_unique(str):
	#Sort the string
	str=sorted(str)
	set(str)
	for i in range(len(str)-1):
		if(str[i] == str[i+1]):
			print("The duplicate character is", str[i])
	
def main():
	is_unique(argv_1)
if __name__=='__main__':
	main()
