# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include


# Compiler
CXX = g++

# Create dir command
MAKE_DIR = mkdir -p

# Compiler flags
CXXFLAGS = -Wall -std=c++17 -g -I$(INCLUDE_DIR)


# Source and object files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Executable name
TARGET = $(BIN_DIR)/simple_cal

# Default rule
all: $(OBJ_DIR) $(BIN_DIR) $(TARGET)

# Create Bin and obj directories
$(OBJ_DIR):
	$(MAKE_DIR) $(OBJ_DIR)
$(BIN_DIR):
	$(MAKE_DIR) $(BIN_DIR)

# Link oject files to create the executable
$(TARGET): $(OBJ_FILES) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $@

# Compile .cpp files to object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR) a.out

.PHONY: all clean
