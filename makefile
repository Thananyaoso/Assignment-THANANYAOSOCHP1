compile: main.cpp
	 g++ main.cpp -o luknam

run: luknam
	 ./luknam

clean: luknam
	 rm luknam