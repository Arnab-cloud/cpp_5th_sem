# All the directiories

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

# Compiler
CXX = g++

# Compiler Flags
CXX_FLAGS = -Wall -g -I$(INCLUDE_DIR)

# To Make Necessary Directories
MAKE_DIR = mkdir -p

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Executable name
TARGET= $(BIN_DIR)/shapes

# Default Rule
all: $(TARGET)

# Link object files to create the executables
$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXX_FLAGS) $(OBJS) -o $@

# Compile .cpp files into .o files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR) $(INCLUDE_DIR)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

# Create directories
$(OBJ_DIR):
	$(MAKE_DIR) $@

$(BIN_DIR):
	$(MAKE_DIR) $@

# Clean up
clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR) *.out

.PHONY: all clean
