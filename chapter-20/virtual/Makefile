#
#  Author  : Saud Zahir
#  Date    : December 01, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Virtual Functions and Virtual Destructors
#

all:
	g++ -c shape.cpp -o shape.o
	g++ -c square.cpp -o square.o
	g++ -c circle.cpp -o circle.o
	ar rcs libshape.a shape.o square.o circle.o
	g++ main.cpp -L. -lshape -o main.out
	./main.out
