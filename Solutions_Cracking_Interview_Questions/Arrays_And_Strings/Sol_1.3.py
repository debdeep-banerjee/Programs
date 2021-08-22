def string_replace(s):
	for i in range(len(s)):
		if (s[i] == ' ' ):
			print("Detected a blank space at the location",i)
			s[i]= "%20"
			print("The value of the string element after replacementis", s[i])
	s=''.join(s)
	return(s)
s=list("Mr John Smith")
s1=string_replace(s)
s2="Hello"
print(s1)
print(s2)
