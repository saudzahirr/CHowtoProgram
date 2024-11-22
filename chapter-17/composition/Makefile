#
#  Author  : Saud Zahir
#  Date    : November 22, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Composition: Objects as Members of Classes
#

all:
	g++ -c employee.cpp -o employee.o
	ar rcs libemployee.a employee.o
	g++ -c date.cpp -o date.o
	ar rcs libdate.a date.o
	g++ main.cpp -L. -lemployee -ldate -o main.out
	./main.out
