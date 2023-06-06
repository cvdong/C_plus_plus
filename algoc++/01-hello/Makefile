hello.o : hello.cpp
	@g++ -c $< -o $@ -std=c++11

pro : hello.o
	@g++ $< -o $@

run : pro
	@./pro