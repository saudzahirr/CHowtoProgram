#
#  Author  : Saud Zahir
#  Date    : November 10, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Separating Interface from Implementation
#

all:
	g++ -c employee.cpp -o employee.o
	ar rcs libemployee.a employee.o
	g++ main.cpp -L. -lemployee -o main.out
	./main.out
