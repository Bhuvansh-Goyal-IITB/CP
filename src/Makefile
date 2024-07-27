CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

OUTPUT_DIR := ./out

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $(OUTPUT_DIR)/$@

clean:
	rm -f $(OUTPUT_DIR)/*

.PHONY: all clean
