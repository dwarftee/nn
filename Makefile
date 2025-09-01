make:
	g++ main.cpp sigmoid.cpp -o main
	./main

commit:
	git commit -a -m "commit :0"

push:
	git push origin master
