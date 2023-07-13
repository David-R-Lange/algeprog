all:
	g++ -Wall -o complex_numbers complex_numbers.cc complex.cc
	./complex_numbers
complex_numbers: complex_numbers.o complex.o
	g++ *.o -o complex_numbers
complex_numbers.o: complex_numbers.cc complex_numbers.hh
	g++ -c -Wall complex_numbers.cc
complex.o: complex.cc complex_numbers.hh
	g++ -c -Wall complex.cc
clean:
	rm *.o
	@echo "Removed object files"
