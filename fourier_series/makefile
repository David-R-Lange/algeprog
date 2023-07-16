all:	fourier_series
	./fourier_series

fourier_series: fourier_series.o fourier.o
	g++ *.o -o fourier_series -g

fourier_series.o: fourier_series.cc fourier_series.hh
	g++ -c -Wall fourier_series.cc -g

fourier.o: fourier_series_test.cc fourier_series.hh
	g++ -c -Wall fourier_series_test.cc -g

clean:
	rm *.o
	rm fourier_series
	@echo "Removed object files"
