# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -I.
LDFLAGS := 

# Directory structure
BUILD_DIR := build
OBJ_DIR := obj
TARGET := $(BUILD_DIR)/ejecutable

# File discovery
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

# Default target
all: $(TARGET) | $(BUILD_DIR)

# Create directories if needed
$(BUILD_DIR) $(OBJ_DIR):
	mkdir -p $@

# Link object files into executable
$(TARGET): $(OBJECTS) | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

# Compile source files to object files
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR) $(OBJ_DIR)

.PHONY: all clean
