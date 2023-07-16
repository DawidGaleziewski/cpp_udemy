# preprocessor
is a program that processes is the program that processes the program, before the compiler sees it.

- removes all the comments from the program and replaces it with a single space
- looks for a pre-preocesor directives and executes them

# pre-processor directives
start with a # symbol:
```cpp
#include <iostream>
#include "myfile.h"

#if
#elif
#else
```

most commonly used directives are #include. Preprocesor will replace those with a file it refers to and recursivly will process this file as well.
Also great usecase is to test if i.e we are on windows and onclude some windows specific libraries for windows. 

Preprocessor does not understand cpp it simply preperas the program for complier
