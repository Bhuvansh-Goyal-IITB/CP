CXX := g++
CXXFLAGS := -Wall -O2 -std=c++11

OUTPUT_DIR := ./out

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $(OUTPUT_DIR)/$@

clean:
	rm -f $(OUTPUT_DIR)/*

.PHONY: all clean
