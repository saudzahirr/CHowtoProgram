#
#  Author  : Saud Zahir
#  Date    : November 19, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Class Scope and Accessing Class Members
#

all:
	g++ -c account.cpp -o account.o
	ar rcs libaccount.a account.o
	g++ main.cpp -L. -laccount -o main.out
	./main.out
