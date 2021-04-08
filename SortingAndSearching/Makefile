CXX=g++
CXXFLAGS=-std=c++11

.PHONY: clean

distinct_numbers: distinct_numbers.cpp
	$(CXX) $(CXXFLAGS) distinct_numbers.cpp -o ./builds/distinct_numbers

apartments: apartments.cpp
	$(CXX) $(CXXFLAGS) apartments.cpp -o ./builds/apartments

ferris_wheel: ferris_wheel.cpp
	$(CXX) $(CXXFLAGS) ferris_wheel.cpp -o ./builds/ferris_wheel

concert_tickets: concert_tickets.cpp
	$(CXX) $(CXXFLAGS) concert_tickets.cpp -o ./builds/concert_tickets

clean:
	rm ./builds/*
