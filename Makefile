all:
	gcc main.c -o main

ifeq ($(OS), Windows_NT)
	main.exe
else
	./main
endif
