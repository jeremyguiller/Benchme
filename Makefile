cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

CXX = g++

SRC = ./*.c
OBJ = $(SRC:.cc=.o)
EXEC = Benchme

all: $(EXEC)

$(EXEC): $(OBJ)
    $(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
    rm -rf $(OBJ) $(EXEC)
