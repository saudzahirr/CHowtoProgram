#
#  Author  : Saud Zahir
#  Date    : November 24, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: static Class Members
#

all:
	g++ -c employee.cpp -o employee.o
	ar rcs libemployee.a employee.o
	g++ main.cpp -L. -lemployee -o main.out
	./main.out
