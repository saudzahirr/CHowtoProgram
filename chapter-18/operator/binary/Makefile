#
#  Author  : Saud Zahir
#  Date    : November 24, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Overloading Binary Operators
#

all:
	g++ -c quaternion.cpp -o quaternion.o
	ar rcs libquaternion.a quaternion.o
	g++ main.cpp -L. -lquaternion -o main.out
	./main.out
