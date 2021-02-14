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
- enum
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
3. static
4. register
*/

extern int access_me;

int main(int argc, char const *argv[])
{
    access_me = 1;
    printf("%d",access_me);
    return 0;
}
