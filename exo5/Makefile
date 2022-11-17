main: exo5-2.o exo5-2-fonctions.o exo5-2-tests.o 
	gcc -g -o $@ $^

%.o: %.c
	gcc -g -c $<

clean: 
	rm -rf *.o 
	rm -rf main 
	rm -rf test

