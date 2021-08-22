import sys
#Pass arguments for the file name to the script
sum=0
file_name=sys.argv[1]
print("The file name is",file_name);
file=open(file_name,'r')
for lines in file:
	#print("Line{}:",lines)
	if "Zelle" in lines:
		print("Match found")
		array=lines.split()
		print("############################")
		#for words in array:
		#	print(words)
		for index, word in enumerate(array):
			if (word=="SARAVANAKUMAR"):
				#print("Value is:", array[index+3].split()[1])
				array1=array[index+3].split(",")
				#print(array1[1])
				sum=sum+int(float(array1[1]))
			#if ("DEBIT" in word):
			#if(word=="Carlos"):
				#print("Zelle transactions for Carlos are", array[index+2].split(",")[1])	
				#sum=sum+int(float(array[index+2].split(",")[1]))
		print(sum)
