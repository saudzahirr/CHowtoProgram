#
#  Author  : Saud Zahir
#  Date    : November 29, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Relationships Among Objects in an Inheritance Hierarchy
#

all:
	g++ -c rectangle.cpp -o rectangle.o
	g++ -c square.cpp -o square.o
	ar rcs libshape.a rectangle.o square.o
	g++ main.cpp -L. -lshape -o main.out
	./main.out
