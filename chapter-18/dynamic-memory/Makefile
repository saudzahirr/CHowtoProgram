#
#  Author  : Saud Zahir
#  Date    : November 25, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Dynamic Memory Management
#

all:
	g++ -c quaternion.cpp -o quaternion.o
	ar rcs libquaternion.a quaternion.o
	g++ main.cpp -L. -lquaternion -o main.out
	./main.out
