math: math_stuff.o math_utils.o
	g++ -o math math_stuff.o math_utils.o

math_stuff.o: math_stuff.cpp
	g++ -c math_stuff.cpp

math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp

clean:
	rm *.o math