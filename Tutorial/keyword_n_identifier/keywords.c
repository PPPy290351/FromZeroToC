/* C keywords are predefined, reserved words used in programming 
that have special meanings to the compiler.
# Keywords are part of the syntax and they cannot be used as an identifier

- auto
- double
- int
- struct
- break
- else
- long
- switch
- case
- enum : 
- register
- typedef
- char
- extern
- return
- union
- continue
- for
- signed
- void
- do
- if
- static 
- while
- default
- goto
- sizeof
- volatile
- const
- float
- short
- unsigned

*/

// Every variable in C programming has two properties: type and storage class

/* There are 4 types of storage class:
1. automatic : The variables declared inside a block are "automatic or local variables"
2. external : Variables that are declared outside of all functions are known as "external or global variables"
    > They are accessible from any function inside the program
3. static : The value of a static variable persists until the end of the program.
4. register : Register variables were supposed to be faster than local variables
    > Only use if you are working on embedded systems where you know how to optimize code for the application.
    >> Otherwise, there is no need to use of register variables because nowadays the compiler optimizes well
*/


//TODO: extern variable
#include <stdio.h>
#include "extern_var.h"
void increaseStatic();
/*
Suppose, a global variable is declared in file1. If you try to use that variable in a different file file2, the compiler will complain. To solve this problem, keyword extern is used in file2 to indicate that the external variable is declared in another file.
*/
// extern int access_me = 100; // @ If it is just declared and defined, C compiler will pass it.
int main(int argc, char const *argv[])
{
    printf("%d",access_me);
    increaseStatic();
    increaseStatic();
    increaseStatic();
    return 0;
}

//TODO: static variable
void increaseStatic()
{
    static int a = 0; // ! static variable will not initialize again.
    a++;
    printf("%d",a); // output: 123 // @ If a is local variable, then output always to be 1;
}

