import subprocess
filename=open("List.txt")
for lines in filename:
	print 'rm -rf'+" "+lines
	process=subprocess.Popen('rm -rf'+" "+lines, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
	#process.wait()

