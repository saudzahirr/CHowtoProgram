#
#  Author  : Saud Zahir
#  Date    : December 02, 2024
#  Contact : m.saud.zahir@gmail.com
#
#
#  Topic: Abstract Classes and Pure virtual Functions
#

all:
	g++ -c shape.cpp -o shape.o
	g++ -c 3d.cpp -o 3d.o
	g++ -c 2d.cpp -o 2d.o
	g++ -c sphere.cpp -o sphere.o
	g++ -c hexahedron.cpp -o hexahedron.o
	g++ -c circle.cpp -o circle.o
	g++ -c square.cpp -o square.o
	ar rcs libshape.a shape.o 3d.o 2d.o sphere.o hexahedron.o circle.o square.o
	g++ main.cpp -L. -lshape -o main.out
	./main.out
