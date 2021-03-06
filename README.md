###Herein lies my implementation of the COOL-Compiler:

Cool, an acronym for Classroom Object Oriented Language, is a computer programming
language designed by Alexander Aiken for use in an undergraduate compiler course project.
While small enough for a one term project, Cool still has many of the features of modern
programming languages, including objects, automatic memory management, strong static
typing and simple reflection. The reference Cool compiler is written in C++,
built fully on public domain tools. It generates code for a MIPS simulator, SPIM.
Thus, the language should port easily to other platforms. It has been used for teaching
compilers at many institutions (such as the University of California at Berkeley, where it was
first used for Shahid Beheshti University of Iran) and the software is stable.

A simple Cool program for computing factorial follows:

```c++

class Main inherits IO {
  main(): Object {{
    out_string("Enter an integer greater-than or equal-to 0: ");

    let input: Int <- in_int() in
      if input < 0 then
        out_string("ERROR: Number must be greater-than or equal-to 0\n")
      else {
        out_string("The factorial of ").out_int(input);
        out_string(" is ").out_int(factorial(input));
      }
      fi;
  }};

  factorial(num: Int): Int {
    if num = 0 then 1 else num * factorial(num - 1) fi
  };
};

```

### The Assignments:
1: This assignment implements the lexical analyzer from scratch without flex.

2: This assignment implements the recursive descent parser without the use of bison.

3: This assignment implements the conversion of our Abstract Syntax Tree, to
      LLVM intermediate representation. (without objects)

4: This assignment finishes the LLVM code generation supporting basic classes and new objects.

5: This assignment implements two optimizations to the LLVM Compiler. The LICM and ADCE 
optimizations.
