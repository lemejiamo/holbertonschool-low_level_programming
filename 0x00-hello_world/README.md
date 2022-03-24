## 0x00. C - Hello, World

<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg">

####  Resources

Read or watch:

+ [Everything you need to know to start with C.pdf (read it first)](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220324%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220324T221941Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=3c9f23e47ee74e597bd21c4cae7fcad9bd58112afe164676e5261e931c7c5998) 
+ [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
+ [C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
+ [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
+ [Learning to program in C part 1](Learning to Program in C (Part 01))
+ [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
+ [Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
+ [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)


## Tasks
#### 0. Preprocessor

    Write a script that runs a C file through the preprocessor and save the result into another file.
    
        File: 0-preprocessor

#### 1. Compiler

    Write a script that compiles a C file but does not link.
        
        File: 1-compiler

#### 2. Assembler

    Write a script that generates the assembly code of a C code and save it in an output file.

        The C file name will be saved in the variable $CFILE
        The output file should be named the same as the C file, but with the extension .s instead of .c.
        File: 2-assembler

#### 3. Name

    Write a script that compiles a C file and creates an executable named cisfun.

        The C file name will be saved in the variable $CFILE
        File: 3-name

#### 4. Hello, puts

    Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

        Use the function puts
        You are not allowed to use printf
        Your program should end with the value 0
        File: 4-puts.c

#### 5. Hello, printf

    Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

        Use the function printf
        Your program should return 0
        Your program should compile without warning when using the -Wall gcc option
        File: 5-printf.c

#### 6. Size is not grandeur, and territory does not make a nation

    Write a C program that prints the size of various types on the computer it is compiled and run on.

        Your program should return 0
        You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

        File: 6-size.c

#### 8. Intel

    Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

        The C file name will be saved in the variable $CFILE.
        The output file should be named the same as the C file, but with the extension .s instead of .c. 
        File: 100-intel

#### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity

    Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

        You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
        Your program should return 1
        Your program should compile without any warnings when using the -Wall gcc option
        File: 101-quote.c

