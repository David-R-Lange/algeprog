all:	steepest_descent
	./steepest_descent

steepest_descent:	function.o steepest_descent.o test.o
	g++ *.o -o steepest_descent -g

test.o:	test.cpp function.hh steepest_descent.hh
	g++ -c -Wall test.cpp -g

steepest_descent.o:	steepest_descent.cpp steepest_descent.hh
	g++ -c -Wall steepest_descent.cpp -g

function.o:	function.cpp function.hh
	g++ -c -Wall function.cpp -g
clean:
	rm *.o
	rm steepest_descent
	@echo "Removed object files"
