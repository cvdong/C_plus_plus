main.o : main.cpp
	@g++ -c $< -o $@ -std=c++11

pro : main.o
	@g++ $< -o $@

run : pro
	@./pro