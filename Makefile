make:
	g++ main.cpp mathslib.cpp -o main
	./main

commit:
	git commit -a -m "commit :0"

push:
	git push origin master
