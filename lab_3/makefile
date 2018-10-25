GXX = g++
OUTPUT = Lab03
CXXFLAGS =-g -Wall
SRC = $(wildcard *.cpp)
OBS = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp = .d) 

DEP_FLAGS = -MMD
DEP_FLAGS+= -MP

all: $(OUTPUT)

$(OUTPUT): $(OBS)
	$(GXX) $(CXXFLAGS) $^ -o $@

$(OBS): $(SRC)
	$(GXX) $(CXXFLAGS) -c $*.cpp -o $@
	
run: 
	./$(OUTPUT)

clean:
	rm *.o $(OUTPUT)



.PHONY: clean all run

	-include $(DEP)
