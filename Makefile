# Variables
CC_C = gcc        # Compiler for C
CC_CPP = g++      # Compiler for C++
CFLAGS = -Wall    # Common flags for both C and C++
LDFLAGS_C = -lm   # Linking flags for C (math library)
LDFLAGS_CPP =    # Additional linking flags for C++ (if needed)
OUT_UNIX = a.out  # Default output file for Unix-like systems
OUT_WIN = a.exe   # Default output file for Windows

# Detect OS (Unix-like vs Windows)
ifeq ($(OS),Windows_NT)
    OUT = $(OUT_WIN)
else
    OUT = $(OUT_UNIX)
endif

# Check if the provided file is C or C++
.PHONY: compile clean

# Default target: compile the source file based on suffix
compile: $(FILE)
	@if [ "$(FILE)" = "" ]; then \
		echo "Error: No FILE specified. Use 'make compile FILE=*.c or *.cpp'"; \
	elif echo $(FILE) | grep -E '\.c$$'; then \
		$(CC_C) $(CFLAGS) -o $(OUT) $(FILE) $(LDFLAGS_C); \
		echo "Compiled C file with gcc, output: $(OUT)"; \
	elif echo $(FILE) | grep -E '\.(cpp|cc|cxx)$$'; then \
		$(CC_CPP) $(CFLAGS) -o $(OUT) $(FILE) $(LDFLAGS_CPP); \
		echo "Compiled C++ file with g++, output: $(OUT)"; \
	else \
		echo "Error: Unsupported file extension. Only .c, .cpp, .cc, or .cxx are supported."; \
	fi

	# Run the output file and check if it terminated with exit code 1
	./$(OUT); \
	EXIT_CODE=$$?; \
	if [ $$EXIT_CODE -ne 0 ]; then \
		echo "Warning: Program terminated with exit code $$EXIT_CODE"; \
	fi

# Clean the generated output
clean:
	rm -f $(OUT)
	git clean -Xfd

