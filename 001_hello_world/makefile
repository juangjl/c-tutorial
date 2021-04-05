TARGET   = $(CURDIR)

CC=g++
LL=g++

SRC=./src
OUT=./out

CFLAGS=  -O3 -ansi -g -Wno-unused-result
LFLAGS=  -lpthread -lz -lm  -ldl

INC=  -I./inc 

SOURCES  := $(wildcard $(SRC)/*.cpp)
OBJECTS  := $(SOURCES:%.cpp=%.o)

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(LL) $(OBJECTS) $(LFLAGS) -o ${TARGET}.o
	@mv ${SRC}/*.o ${OUT}
	@cp ${TARGET}.o ${OUT}
	@echo "Linking complete!"

$(OBJECTS): $(OBJ)%.o : %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ ${INC} 
	@echo "[CC] "$<

all:$(BINDIR)/$(TARGET)

clean:
	@rm -rf *.o *.out $(SRC)/*.o $(SRC)/*.out
	@rm -rf ${OUT}/*.o  *.o
