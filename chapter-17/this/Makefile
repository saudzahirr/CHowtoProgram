#
#  Author  : Saud Zahir
#  Date    : November 24, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Using the this Pointer
#

all:
	g++ -c account.cpp -o account.o
	ar rcs libaccount.a account.o
	g++ main.cpp -L. -laccount -o main.out
	./main.out
