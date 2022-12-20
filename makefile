test: test.o LinkedList.o Node.o
	gcc test.o LinkedList.o Node.o -o test
test.o: test.c
	gcc -c test.c
LinkedList.o: LinkedList.c LinkedList.h
	gcc -c LinkedList.c
Node.o: Node.c Node.h
	gcc -c Node.c
clean:
	del *.o
	del *.exe
