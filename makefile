temperature.out:
	clang++ --std=c++11 -o temperature.out temperature.cpp

clean:
	rm temperature.out