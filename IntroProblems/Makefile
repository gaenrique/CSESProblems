CXX=g++
CXXFLAGS=-std=c++11

.PHONY: clean

weird_algorithm: weird_algorithm.cpp
	$(CXX) $(CXXFLAGS) weird_algorithm.cpp -o ./builds/weird_algorithm

missing_number: missing_number.cpp
	$(CXX) $(CXXFLAGS) missing_number.cpp -o ./builds/missing_number

repetitions: repetitions.cpp
	$(CXX) $(CXXFLAGS) repetitions.cpp -o ./builds/repetitions
	
increasing_array: increasing_array.cpp
	$(CXX) $(CXXFLAGS) increasing_array.cpp -o ./builds/increasing_array

permutations: permutations.cpp
	$(CXX) $(CXXFLAGS) permutations.cpp -o ./builds/permutations

number_spiral: number_spiral.cpp
	$(CXX) $(CXXFLAGS) number_spiral.cpp -o ./builds/number_spiral

clean:
	rm ./builds/*
