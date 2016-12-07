 
# stale kompilacji:
kompilator=g++-4.7
standard=-std=c++11

# kompilacja i uruchomienie:

__ : main 
	./main	 
	
main: main.cpp nvwa/*.cpp
	$(kompilator) $(standard) -o $@ $^

 
