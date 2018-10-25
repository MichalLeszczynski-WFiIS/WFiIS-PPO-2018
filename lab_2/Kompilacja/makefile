GXX = g++
OUTPUT = program

CXXFLAGS+=-Wall -O0 -std=c++11
CXXFLAGS+=-g

SRC = $(wildcard *.cpp)
OBS = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp = .d) 

DEP_FLAGS = -MMD
DEP_FLAGS+= -MP

all: $(OUTPUT)

program: $(OBS)
	$(GXX) $(CXXFLAGS) $^ -o $@

$(OBS): $(SRC)
	$(GXX) $(CXXFLAGS) -c $*.cpp -o $@
	
run: 
	./$(OUTPUT)

clean:
	rm *.o $(OUTPUT)



.PHONY: clean all run

	-include $(DEP)
