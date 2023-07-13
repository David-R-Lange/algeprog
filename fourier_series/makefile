all:	fourier_series
	./fourier
fourier_series: fourier_series.o fourier.o
	g++ *.o -o fourier_series
fourier_series.o: fourier_series.cc fourier_series.hh
	g++ -c -Wall fourier_series.cc
fourier.o: fourier.cc fourier_series.hh
	g++ -c -Wall fourier.cc
clean:
	rm *.o
	@echo "Removed object files"

