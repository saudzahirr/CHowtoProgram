#
#  Author  : Saud Zahir
#  Date    : November 20, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Destructors
#

all:
	g++ -c account.cpp -o account.o
	ar rcs libaccount.a account.o
	g++ main.cpp -L. -laccount -o main.out
	./main.out
