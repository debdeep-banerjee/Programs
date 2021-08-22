def compare_strings(str,str1):
	list1=[]
	list2=[]
	if(len(str) != len(str1)):
		print("The length of 2 strings does not match")
	#Find differences in characters
	if(len(str)== len(str1)):
		for i in range(len(str)):
			if(str[i] != str1[i]):
				list1.append(str[i])
			
	else:
		#The element count of the strings are different
		#Find the max length of the string
		if (len(str) > len(str1)):
			min_length=len(str1)
		else:
			min_length=len(str)
		
		for j in range(min_length):
			if(str1[j] != str[j]):
				list2.append(str1[j])
	if(len(list1) > 0):
		print("The element differences in list 1 are", len(list1))
	if(len(list2) > 0):
		print("The element differences in list 2 are", len(list2))
compare_strings("Hello World","Helso World")

