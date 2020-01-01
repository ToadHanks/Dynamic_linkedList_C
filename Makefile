store: items.o store.o
	gcc -Wall -o store store.c items.c
item.o: items.c items.h
	gcc -c items.c
store.o: store.c items.h
	gcc -c store.c
clean:
	rm items.o store.o store
