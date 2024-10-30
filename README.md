# C How to Program
C How to Program, with an introduction to C++.

## Contents

### [Chapter 02](chapter-02)
- **Introduction to C Programming**: Fundamentals of the C programming language, including basic syntax, data types, and simple I/O operations.

### [Chapter 03](chapter-03)
- **Structured Program Development in C**: Algorithms, pseudocode, and control structures like selection and iteration statements for structuring C programs.

### [Chapter 04](chapter-04)
- **C Program Control**: Focuses on iteration essentials, including the use of `for`, `while`, and `do...while` loops, as well as `if`, `if...else` and `switch` statements.

### [Chapter 05](chapter-05)
- **C Functions**: Modularize programs using functions, covering function prototypes, arguments, header, storage classes, scope, and recursion.

### [Chapter 06](chapter-06)
- **C Arrays**: Arrays definition, manipulation, character arrays, arrays of functions, multidimensional and variable length arrays.

### [Chapter 07](chapter-07)
- **C Pointers**: Pointers definition, `const` type qualifier, principle of least privilege, pointer arithemetic, `sizeof` operator, arrays of pointers, function pointers and array of pointers to functions.

### [Chapter 08](chapter-08)
- **C Characters and Strings**: String handling and character functions in C, including string manipulation, comparison, search and memory functions.

### [Chapter 09](chapter-09)
- **C Formatted Input/Output**: Conversion specifiers for `printf` and `scanf`.

### [Chapter 10](chapter-10)
- **C Structures, Unions, Bit Manipulation, and Enumerations**: Definitions of structures and unions in C, type definitions, bit manipulation techniques, bit fields, and enumeration constants.

### [Chapter 11](chapter-11)
- **C File Processing**: File handling in C, including creating, reading, and writing files using sequential and random access.

### [Chapter 12](chapter-12)
- **C Data Structures**: Introduction to self-referential structures and common data structures such as linked lists, stacks, and queues.

### [Chapter 13](chapter-13)
- **C Preprocessor**: The preprocessor directives in C, including `#include`, `#define` symbolic constants and macros, conditional compilation `#if...#endif`, `#` and `##` operators, predefined symbolic constants and assertion.

### [Chapter 14](chapter-14)
- **Other C Topics**: Redirecting input `<` and output `>`, pipe `|`, variable-length argument lists `...`, command line arguments `argv`, compiling multiple source file programs using `extern`, `static` and Makefile. Use of `exit`, `atexit`, suffixes, signal handling, dynamic memory allocation using `calloc` and `realloc`. Unconditional branching using `break` and `goto` statement.

### [Appendix E](appendix-e)
- *Designated initializers and compound literals*
- *Complex numbers*
- *Empty arguments in a macro*
- `__VA_ARGS__` *identifier and variable-length argument lists for macros*
- `__func__` *predefined Identifier*
- *Inline functions using keyword* `inline`
- *Keyword* `restrict`
- `_Noreturn` *function specifier*
- *Static assertions using* `_Static_assert`
- *Type-generic expressions using* `_Generic`

## Program Compilation

To compile C or C++ code, use the following command. For execution, run `a.exe` on Windows and `./a.out` on Unix.

```bash
make compile FILE=<filename>
```

## Clean

To clean up build binaries, use the following command:

```bash
make clean
```
