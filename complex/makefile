all: complex_vector
	./complex_vector

complex_vector: complex_numbers.o complex_vector.o complex_vector_test.o
	g++ *.o -o complex_vector -g

complex_vector.o: complex_vector.cc complex_vector.hh complex_numbers.hh
	g++ -c -Wall complex_vector.cc

complex_vector_test.o: complex_vector_test.cc complex_vector.hh complex_numbers.hh
	g++ -c -Wall complex_vector_test.cc

complex_numbers.o: complex_numbers.cc complex_numbers.hh
	g++ -c -Wall complex_numbers.cc

clean:
	rm *.o
	rm complex_vector
	@echo "Removed object files"
