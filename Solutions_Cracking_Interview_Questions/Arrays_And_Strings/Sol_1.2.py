def find_permutations_String(str):
	length_string=len(str)
	list={}
	for i in range(length_string):
		#Generate permutations of the remaining string elements
		print("The current value of iteration is",i)
		remainder_string=str[i:length_string]
		print("The value of remainder_string in i for loop is", remainder_string)
		#Rotate the elements of the remainder string
		
		for j in range(0,len(remainder_string)):
			temp=remainder_string[j]
			print("The current value of iteration of j is",j)
			#print("The value of remainder string[j] is", remainder_string[j])
			remainder_string.replace(remainder_string[j],remainder_string[j+1])
			remainder_string.replace(remainder_string[j+1],temp)
			print("The value of remainder string in the j for loop is", remainder_string)
s="ab"
find_permutations_String(s)
		
