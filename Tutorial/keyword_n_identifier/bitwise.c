/* Operator

& : Bitwise AND
| : Bitwise OR
^ : Bitwise exclusive OR
~ : Bitwise complement
<< : Shift left
>> : Shift right

sizeof //! sizeof operator

?: -> ternary operator
&  -> reference operator
*  -> dereference operator
->  : member selection operator

*/

// Bit-level operations, performance/power saving...
int main(int argc, char const *argv[])
{
    // Simple AND
    int a=12,b=25;
    /*
    00001100
    00011001
    --------
    00001000 = 8 (decimal)
    */
    int c = a & b;
    printf("result of AND : %d\n", c);
    // Simple XOR , two operands are opposite
    /*
    00001100
    00011001
    --------
    00010101 = 21
    */
    c = a ^ b;
    printf("result of XOR : %d\n", c);
    // Simple "Complement"(按位補碼運算符) ,  It changes 1 to 0 and 0 to 1. It is denoted by ~.
    /*
    example a:  [complement + 1] -> 2's complement
    00001100
    --------(bitwise complement)
    11110011 --> 11110011 : 243
                -----------(2's complement) : -(N+1)
              - (00001100 + 1) : -13
    */
    c = ~a;
    printf("result of Complement : %d\n", c);
    // ! result of Complement : -13, why the value is -13 instead of 243
    /*// @ 2's Complement <<<<
    Bitwise complement of any number N is -(N+1). Here's how:
        > bitwise complement of N = ~N (represented in 2's complement form)
        > 2'complement of ~N= -(~(~N)+1) = -(N+1)
    */
    return 0;
}

/*
Right shift and Left shift
> 
Left shift operator shifts all bits towards left by a certain number of specified bits. The bit positions that have been vacated by the left shift operator are filled with 0. The symbol of the left shift operator is <<.
*/
