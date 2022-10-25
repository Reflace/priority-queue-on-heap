program: main.o Parallelepiped.o
	g++ -o run main.o Heap.hpp Parallelepiped.o 

main.o:
	g++ -c main.cpp 

Parallelepiped.o:
	g++ -c Parallelepiped.cpp

clean:
	rm *.o run