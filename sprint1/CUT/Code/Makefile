a.out: main.o insert.o display.o importContacts.o modify.o search.o deleteContact.o
	 gcc main.o insert.o display.o importContacts.o modify.o search.o deleteContact.o -o a.out


main.o: src/main.c header/phonebook.h
	gcc -c src/main.c


insert.o: src/insert.c header/phonebook.h
	  gcc -c src/insert.c


display.o: src/display.c header/phonebook.h
	   gcc -c src/display.c


importContacts.o: src/importContacts.c header/phonebook.h
		  gcc -c src/importContacts.c

modify.o: src/modify.c header/phonebook.h
	  gcc -c src/modify.c


search.o: src/search.c header/phonebook.h
	  gcc -c src/search.c


deleteContact.o: src/deleteContact.c header/phonebook.h
		gcc -c src/deleteContact.c

clean:
	rm *.o
