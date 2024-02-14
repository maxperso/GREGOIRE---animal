##
## EPITECH PROJECT, 2024
## test_icedev
## File description:
## Makefile
##

SRC = main.cpp

EXE = test_icedev

CXXFLAGS = -Wall -Wextra -std=c++17

$(EXE): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(EXE) $^

clean:
	rm -f *.o $(EXE)

all: $(EXE)
