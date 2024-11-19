#
#  Author  : Saud Zahir
#  Date    : November 19, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Throwing Exceptions
#

all:
	g++ -c Time.cpp -o Time.o
	ar rcs libTime.a Time.o
	g++ main.cpp -L. -lTime -o main.out
	./main.out
